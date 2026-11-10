// This file is auto-generated
#include "C:/Users/123/OneDrive/Desktop/School Project/src/Front/build/ui.h"

auto FocusBorder_root_1::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->field_root_1.border_color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush((self->globals->global_FluentPalette_249->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+4.294967295e9) : slint::Color::from_argb_encoded(+3.85875968e9)));
                        });
    self->field_root_1.border_width.set(2);
    self->field_rectangle_2.border_color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush((self->globals->global_FluentPalette_249->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+3.003121664e9) : slint::Color::from_argb_encoded(+4.294967295e9)));
                        });
    self->field_rectangle_2.border_radius.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_root_1.border_radius.get() -(float) 2);
                        });
    self->field_rectangle_2.border_width.set(1);
    self->field_root_1.background.set_constant();
    self->field_root_1.border_width.set_constant();
    self->field_rectangle_2.background.set_constant();
    self->field_rectangle_2.border_width.set_constant();
}

auto FocusBorder_root_1::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

auto FocusBorder_root_1::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) : [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);
}

auto FocusBorder_root_1::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_1_height.get()), float(self->field_root_1_width.get()), float(0), float(0)));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float((self->field_root_1_height.get() -(float) 4)), float((self->field_root_1_width.get() -(float) 4)), float(2), float(2)));
    }
    return {};
}

auto FocusBorder_root_1::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

auto FocusBorder_root_1::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    return {};
}

auto FocusBorder_root_1::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

auto FocusBorder_root_1::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

auto FocusBorder_root_1::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

auto FocusBorder_root_1::ensure_instantiated () const -> bool{
    [[maybe_unused]] auto self = this;
    bool _changed = false;
    return _changed;
}

const slint::private_api::ItemTreeVTable Component_image_7::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, ensure_instantiated, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_image_7>, slint::private_api::dealloc };

auto Component_image_7::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Button_root_3 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const Button_root_3>(parent->self_weak.lock().value(), parent);
    slint::private_api::optional_then(self->parent.lock(), [&](auto&&x) { slint::private_api::Property<slint::Image>::link_two_way(&self->field_image_7.source, &x->field_root_3_icon); });
    self->field_image_7.colorize.set(slint::Brush(slint::Color::from_argb_encoded(0)));
    self->field_image_7.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(((slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_3_height.get(); })) -(float) 5) -(float) 5), 20);
                        });
    self->field_image_7.image_fit.set(slint::cbindgen_private::ImageFit::Contain);
    self->field_image_7.width.set(20);
    self->field_image_7.colorize.set_constant();
    self->field_image_7.image_fit.set_constant();
    self->field_image_7.image_rendering.set_constant();
    self->field_image_7.source.set_constant();
    self->field_image_7.width.set_constant();
}

auto Component_image_7::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

auto Component_image_7::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ImageItemVTable), const_cast<slint::cbindgen_private::ImageItem*>(&self->field_image_7), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(20, layout_info.max_percent, 20, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }() : [&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ImageItemVTable), const_cast<slint::cbindgen_private::ImageItem*>(&self->field_image_7), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, 20, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }();
}

auto Component_image_7::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(std::max<float>(((slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_3_height.get(); })) -(float) 5) -(float) 5), 20)), float(20), float(slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return slint::private_api::layout_cache_access(x->field_root_3_i_layout_6_layout_cache.get(), 0, 0, 2); }))), float(5)));
    }
    return {};
}

auto Component_image_7::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

auto Component_image_7::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    return {};
}

auto Component_image_7::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

auto Component_image_7::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

auto Component_image_7::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

auto Component_image_7::ensure_instantiated () const -> bool{
    [[maybe_unused]] auto self = this;
    bool _changed = false;
    return _changed;
}

auto Component_image_7::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_image_7*>(base);
        std::abort();
    };
    auto self = reinterpret_cast<const Component_image_7*>(component.instance);
    auto self_rc = self->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component), index, order, visitor, dyn_visit);
}

auto Component_image_7::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

auto Component_image_7::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

auto Component_image_7::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
        std::abort();
}

auto Component_image_7::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

auto Component_image_7::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_image_7*>(component.instance);
    if (auto parent = self->parent.lock()) {
        *result = { (*parent)->self_weak, (*parent)->tree_index_of_first_child + 5 };
    }
}

auto Component_image_7::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

auto Component_image_7::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

auto Component_image_7::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(0, 1, 0, 0, false) };
    return slint::private_api::make_slice(std::span(children));
}

auto Component_image_7::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(ImageItemVTable),  offsetof(Component_image_7, field_image_7) } };
    return slint::private_api::make_slice(std::span(items));
}

auto Component_image_7::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_image_7*>(component.instance)->layout_info(o);
}

auto Component_image_7::ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool{
    return reinterpret_cast<const Component_image_7*>(component.instance)->ensure_instantiated();
}

auto Component_image_7::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_image_7*>(component.instance)->item_geometry(index);
}

auto Component_image_7::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_image_7*>(component.instance)->accessible_role(index);
}

auto Component_image_7::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_image_7*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

auto Component_image_7::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_image_7*>(component.instance)->accessibility_action(index, *action);
}

auto Component_image_7::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_image_7*>(component.instance)->supported_accessibility_actions(index);
}

auto Component_image_7::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

auto Component_image_7::window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_image_7*>(component.instance)->globals->window().window_handle();
}

auto Component_image_7::create (class Button_root_3 const * parent) -> slint::ComponentHandle<Component_image_7>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_image_7>::make();
    auto self = const_cast<Component_image_7 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_image_7>{ self_rc };
}

Component_image_7::~Component_image_7 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

auto Component_image_7::init () -> void{
    user_init();
}

auto Component_image_7::layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo{
    [[maybe_unused]] auto self = this; return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o), {}, {} };
}

auto Component_image_7::layout_item_info_at_cross_width ([[maybe_unused]] float cross_width) const -> slint::cbindgen_private::LayoutItemInfo{
    [[maybe_unused]] auto self = this; [[maybe_unused]] auto o = slint::cbindgen_private::Orientation::Vertical; return { ([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ImageItemVTable), const_cast<slint::cbindgen_private::ImageItem*>(&self->field_image_7), slint::cbindgen_private::Orientation::Vertical, cross_width, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, 20, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()), {}, {} };
}

auto Component_image_7::flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo{
    auto base = layout_item_info(o, child_index); return { base.constraint, { base.cross_axis_self_alignment, base.layout_order } };
}

auto Component_image_7::flexbox_layout_item_info_at_cross_width ([[maybe_unused]] float cross_width) const -> slint::cbindgen_private::FlexboxLayoutItemInfo{
    return flexbox_layout_item_info(slint::cbindgen_private::Orientation::Vertical, std::nullopt);
}

const slint::private_api::ItemTreeVTable Component_text_9::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, ensure_instantiated, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_text_9>, slint::private_api::dealloc };

auto Component_text_9::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Button_root_3 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const Button_root_3>(parent->self_weak.lock().value(), parent);
    self->field_text_9.color.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_3_text_color.get(); }));
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_text_9.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_3_height.get(); })) -(float) 5) -(float) 5);
                        });
    self->field_text_9.horizontal_alignment.set(slint::cbindgen_private::TextHorizontalAlignment::Center);
    self->field_text_9.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_3_text.get(); }));
                        });
    self->field_text_9.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_9.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return slint::private_api::layout_cache_access(x->field_root_3_i_layout_6_layout_cache.get(), 3, 0, 2); }));
                        });
    self->field_text_9.font_size.set_constant();
    self->field_text_9.font_weight.set_constant();
    self->field_text_9.horizontal_alignment.set_constant();
    self->field_text_9.max_lines.set_constant();
    self->field_text_9.vertical_alignment.set_constant();
}

auto Component_text_9::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

auto Component_text_9::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_9), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index) : slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_9), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);
}

auto Component_text_9::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(((slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_3_height.get(); })) -(float) 5) -(float) 5)), float(slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return slint::private_api::layout_cache_access(x->field_root_3_i_layout_6_layout_cache.get(), 3, 0, 2); }))), float(slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return slint::private_api::layout_cache_access(x->field_root_3_i_layout_6_layout_cache.get(), 2, 0, 2); }))), float(5)));
    }
    return {};
}

auto Component_text_9::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

auto Component_text_9::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    return {};
}

auto Component_text_9::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

auto Component_text_9::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

auto Component_text_9::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

auto Component_text_9::ensure_instantiated () const -> bool{
    [[maybe_unused]] auto self = this;
    bool _changed = false;
    return _changed;
}

auto Component_text_9::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_text_9*>(base);
        std::abort();
    };
    auto self = reinterpret_cast<const Component_text_9*>(component.instance);
    auto self_rc = self->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component), index, order, visitor, dyn_visit);
}

auto Component_text_9::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

auto Component_text_9::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

auto Component_text_9::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
        std::abort();
}

auto Component_text_9::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

auto Component_text_9::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_text_9*>(component.instance);
    if (auto parent = self->parent.lock()) {
        *result = { (*parent)->self_weak, (*parent)->tree_index_of_first_child + 6 };
    }
}

auto Component_text_9::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

auto Component_text_9::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

auto Component_text_9::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(0, 1, 0, 0, false) };
    return slint::private_api::make_slice(std::span(children));
}

auto Component_text_9::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(Component_text_9, field_text_9) } };
    return slint::private_api::make_slice(std::span(items));
}

auto Component_text_9::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_text_9*>(component.instance)->layout_info(o);
}

auto Component_text_9::ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool{
    return reinterpret_cast<const Component_text_9*>(component.instance)->ensure_instantiated();
}

auto Component_text_9::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_text_9*>(component.instance)->item_geometry(index);
}

auto Component_text_9::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_text_9*>(component.instance)->accessible_role(index);
}

auto Component_text_9::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_text_9*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

auto Component_text_9::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_text_9*>(component.instance)->accessibility_action(index, *action);
}

auto Component_text_9::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_text_9*>(component.instance)->supported_accessibility_actions(index);
}

auto Component_text_9::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

auto Component_text_9::window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_text_9*>(component.instance)->globals->window().window_handle();
}

auto Component_text_9::create (class Button_root_3 const * parent) -> slint::ComponentHandle<Component_text_9>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_text_9>::make();
    auto self = const_cast<Component_text_9 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_text_9>{ self_rc };
}

Component_text_9::~Component_text_9 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

auto Component_text_9::init () -> void{
    user_init();
}

auto Component_text_9::layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo{
    [[maybe_unused]] auto self = this; return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o), {}, {} };
}

auto Component_text_9::layout_item_info_at_cross_width ([[maybe_unused]] float cross_width) const -> slint::cbindgen_private::LayoutItemInfo{
    [[maybe_unused]] auto self = this; [[maybe_unused]] auto o = slint::cbindgen_private::Orientation::Vertical; return { (slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_9), slint::cbindgen_private::Orientation::Vertical, cross_width, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index)), {}, {} };
}

auto Component_text_9::flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo{
    auto base = layout_item_info(o, child_index); return { base.constraint, { base.cross_axis_self_alignment, base.layout_order } };
}

auto Component_text_9::flexbox_layout_item_info_at_cross_width ([[maybe_unused]] float cross_width) const -> slint::cbindgen_private::FlexboxLayoutItemInfo{
    return flexbox_layout_item_info(slint::cbindgen_private::Orientation::Vertical, std::nullopt);
}

const slint::private_api::ItemTreeVTable Component_focusborder_13::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, ensure_instantiated, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_focusborder_13>, slint::private_api::dealloc };

auto Component_focusborder_13::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Button_root_3 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const Button_root_3>(parent->self_weak.lock().value(), parent);
    this->field_focusborder_13.init(globals, self_weak.into_dyn(), tree_index, tree_index_of_first_child + 1 - 1);
    self->field_focusborder_13.field_root_1.border_radius.set(4);
    self->field_focusborder_13.field_root_1_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_3_height.get(); }));
                        });
    self->field_focusborder_13.field_root_1_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_3_width.get(); }));
                        });
    self->field_focusborder_13.field_root_1.background.set_constant();
    self->field_focusborder_13.field_root_1.border_radius.set_constant();
    self->field_focusborder_13.field_root_1.border_width.set_constant();
}

auto Component_focusborder_13::user_init () -> void{
    [[maybe_unused]] auto self = this;
    this->field_focusborder_13.user_init();
}

auto Component_focusborder_13::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) : [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);
}

auto Component_focusborder_13::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_3_height.get(); }))), float(slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_3_width.get(); }))), float(0), float(0)));
    }
    if (index == 0) {
        return self->field_focusborder_13.item_geometry(0);
    } else if (index >= 1 && index < 2) {
        return self->field_focusborder_13.item_geometry(index - 0);
    } else return {};
}

auto Component_focusborder_13::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 0) {
        return self->field_focusborder_13.accessible_role(0);
    } else if (index >= 1 && index < 2) {
        return self->field_focusborder_13.accessible_role(index - 0);
    } else return {};
}

auto Component_focusborder_13::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    if (index == 0) {
        return self->field_focusborder_13.accessible_string_property(0, what);
    } else if (index >= 1 && index < 2) {
        return self->field_focusborder_13.accessible_string_property(index - 0, what);
    } else return {};
}

auto Component_focusborder_13::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    if (index == 0) {
        return self->field_focusborder_13.accessibility_action(0, action);
    } else if (index >= 1 && index < 2) {
        return self->field_focusborder_13.accessibility_action(index - 0, action);
    } else return ;
}

auto Component_focusborder_13::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 0) {
        return self->field_focusborder_13.supported_accessibility_actions(0);
    } else if (index >= 1 && index < 2) {
        return self->field_focusborder_13.supported_accessibility_actions(index - 0);
    } else return {};
}

auto Component_focusborder_13::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 0) {
        return self->field_focusborder_13.element_infos(0);
    } else if (index >= 1 && index < 2) {
        return self->field_focusborder_13.element_infos(index - 0);
    } else return {};
}

auto Component_focusborder_13::ensure_instantiated () const -> bool{
    [[maybe_unused]] auto self = this;
    bool _changed = false;
    return _changed;
}

auto Component_focusborder_13::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_focusborder_13*>(base);
        std::abort();
    };
    auto self = reinterpret_cast<const Component_focusborder_13*>(component.instance);
    auto self_rc = self->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component), index, order, visitor, dyn_visit);
}

auto Component_focusborder_13::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

auto Component_focusborder_13::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

auto Component_focusborder_13::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
        std::abort();
}

auto Component_focusborder_13::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

auto Component_focusborder_13::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_focusborder_13*>(component.instance);
    if (auto parent = self->parent.lock()) {
        *result = { (*parent)->self_weak, (*parent)->tree_index_of_first_child + 3 };
    }
}

auto Component_focusborder_13::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

auto Component_focusborder_13::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

auto Component_focusborder_13::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(1, 1, 0, 0, false), 
slint::private_api::make_item_node(0, 2, 0, 1, false) };
    return slint::private_api::make_slice(std::span(children));
}

auto Component_focusborder_13::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(Component_focusborder_13, field_focusborder_13) +  offsetof(FocusBorder_root_1, field_root_1) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(Component_focusborder_13, field_focusborder_13) +  offsetof(FocusBorder_root_1, field_rectangle_2) } };
    return slint::private_api::make_slice(std::span(items));
}

auto Component_focusborder_13::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_focusborder_13*>(component.instance)->layout_info(o);
}

auto Component_focusborder_13::ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool{
    return reinterpret_cast<const Component_focusborder_13*>(component.instance)->ensure_instantiated();
}

auto Component_focusborder_13::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_focusborder_13*>(component.instance)->item_geometry(index);
}

auto Component_focusborder_13::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_focusborder_13*>(component.instance)->accessible_role(index);
}

auto Component_focusborder_13::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_focusborder_13*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

auto Component_focusborder_13::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_focusborder_13*>(component.instance)->accessibility_action(index, *action);
}

auto Component_focusborder_13::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_focusborder_13*>(component.instance)->supported_accessibility_actions(index);
}

auto Component_focusborder_13::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

auto Component_focusborder_13::window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_focusborder_13*>(component.instance)->globals->window().window_handle();
}

auto Component_focusborder_13::create (class Button_root_3 const * parent) -> slint::ComponentHandle<Component_focusborder_13>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_focusborder_13>::make();
    auto self = const_cast<Component_focusborder_13 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_focusborder_13>{ self_rc };
}

Component_focusborder_13::~Component_focusborder_13 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

auto Component_focusborder_13::init () -> void{
    user_init();
}

auto Component_focusborder_13::layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo{
    [[maybe_unused]] auto self = this; return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o), {}, {} };
}

auto Component_focusborder_13::layout_item_info_at_cross_width ([[maybe_unused]] float cross_width) const -> slint::cbindgen_private::LayoutItemInfo{
    return layout_item_info(slint::cbindgen_private::Orientation::Vertical, std::nullopt);
}

auto Component_focusborder_13::flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo{
    auto base = layout_item_info(o, child_index); return { base.constraint, { base.cross_axis_self_alignment, base.layout_order } };
}

auto Component_focusborder_13::flexbox_layout_item_info_at_cross_width ([[maybe_unused]] float cross_width) const -> slint::cbindgen_private::FlexboxLayoutItemInfo{
    return flexbox_layout_item_info(slint::cbindgen_private::Orientation::Vertical, std::nullopt);
}

auto Button_root_3::fn_i_layout_6_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return [&]{    std::vector<slint::cbindgen_private::LayoutItemInfo> cells_vector;self->repeater_0.track_instance_changes();{
                                    auto start_offset = cells_vector.size();
                                    self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->layout_item_info(slint::cbindgen_private::Orientation::Horizontal, std::nullopt)); });
                                    cells_vector.resize(start_offset + self->repeater_0.len());
                                }self->repeater_1.track_instance_changes();{
                                    auto start_offset = cells_vector.size();
                                    self->repeater_1.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->layout_item_info(slint::cbindgen_private::Orientation::Horizontal, std::nullopt)); });
                                    cells_vector.resize(start_offset + self->repeater_1.len());
                                } slint::cbindgen_private::Slice<slint::cbindgen_private::LayoutItemInfo>cells = slint::private_api::make_slice(std::span(cells_vector)); return [&]{
                    auto box_ortho_solved = slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Center, cells, [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(12, 12), arg_0, 4), slint::private_api::make_slice<int>(nullptr, 0));
                    std::vector<slint::cbindgen_private::LayoutItemInfo> measure_cells_vector;
                    measure_cells_vector.reserve(2);
                    std::size_t cursor = 0;
                    for (std::size_t i = 0; i < self->repeater_0.len(); ++i) {
                                if (auto *sub_comp = self->repeater_0.typed_instance_at(i)) {
                                    measure_cells_vector.push_back(sub_comp->layout_item_info_at_cross_width(box_ortho_solved[cursor * 2 + 1]));
                                } else {
                                    measure_cells_vector.push_back({});
                                }
                                ++cursor;
                            }for (std::size_t i = 0; i < self->repeater_1.len(); ++i) {
                                if (auto *sub_comp = self->repeater_1.typed_instance_at(i)) {
                                    measure_cells_vector.push_back(sub_comp->layout_item_info_at_cross_width(box_ortho_solved[cursor * 2 + 1]));
                                } else {
                                    measure_cells_vector.push_back({});
                                }
                                ++cursor;
                            }
                    (void)cursor;
                    return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice(std::span(measure_cells_vector)), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(5, 5));
                }(); }();
}

auto Button_root_3::fn_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return ([&]{ [[maybe_unused]] auto layout_info_3 = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info_3.max, layout_info_3.max_percent, std::max<float>(32, self->fn_i_layout_6_layoutinfo_v_with_constraint(arg_0).min), layout_info_3.min_percent, layout_info_3.preferred, 0); }() + [&]{ [[maybe_unused]] auto inlined_fn_arg_0_0 = arg_0;;return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->fn_i_layout_6_layoutinfo_v_with_constraint(inlined_fn_arg_0_0)); }());
}

auto Button_root_3::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    slint::private_api::Property<bool>::link_two_way(&self->field_i_touch_area_11.enabled, &self->field_i_focus_scope_12.enabled);
    self->field_root_3_accessible_action_default.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    self->field_i_touch_area_11.clicked.call();
                });
    self->field_root_3_i_background_4_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_3_width.get();
                        });
    self->field_root_3_i_layout_6_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ std::array<int, 4> repeated_indices_array;   std::vector<slint::cbindgen_private::LayoutItemInfo> cells_vector;self->repeater_0.track_instance_changes();repeated_indices_array[0] = cells_vector.size();repeated_indices_array[1] = self->repeater_0.len();{
                                    auto start_offset = cells_vector.size();
                                    self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->layout_item_info(slint::cbindgen_private::Orientation::Horizontal, std::nullopt)); });
                                    cells_vector.resize(start_offset + self->repeater_0.len());
                                }self->repeater_1.track_instance_changes();repeated_indices_array[2] = cells_vector.size();repeated_indices_array[3] = self->repeater_1.len();{
                                    auto start_offset = cells_vector.size();
                                    self->repeater_1.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->layout_item_info(slint::cbindgen_private::Orientation::Horizontal, std::nullopt)); });
                                    cells_vector.resize(start_offset + self->repeater_1.len());
                                }slint::cbindgen_private::Slice<int> repeated_indices = slint::private_api::make_slice(std::span(repeated_indices_array)); slint::cbindgen_private::Slice<slint::cbindgen_private::LayoutItemInfo>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Center, cells, [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(12, 12), self->field_root_3_i_background_4_width.get(), 4),repeated_indices); }();
                        });
    self->field_root_3_i_layout_6_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{    std::vector<slint::cbindgen_private::LayoutItemInfo> cells_vector;self->repeater_0.track_instance_changes();{
                                    auto start_offset = cells_vector.size();
                                    self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->layout_item_info(slint::cbindgen_private::Orientation::Horizontal, std::nullopt)); });
                                    cells_vector.resize(start_offset + self->repeater_0.len());
                                }self->repeater_1.track_instance_changes();{
                                    auto start_offset = cells_vector.size();
                                    self->repeater_1.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->layout_item_info(slint::cbindgen_private::Orientation::Horizontal, std::nullopt)); });
                                    cells_vector.resize(start_offset + self->repeater_1.len());
                                } slint::cbindgen_private::Slice<slint::cbindgen_private::LayoutItemInfo>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::box_layout_info(cells,4,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(12, 12),slint::cbindgen_private::LayoutAlignment::Center); }();
                        });
    self->field_root_3_i_layout_6_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{    std::vector<slint::cbindgen_private::LayoutItemInfo> cells_vector;self->repeater_0.track_instance_changes();{
                                    auto start_offset = cells_vector.size();
                                    self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->layout_item_info(slint::cbindgen_private::Orientation::Vertical, std::nullopt)); });
                                    cells_vector.resize(start_offset + self->repeater_0.len());
                                }self->repeater_1.track_instance_changes();{
                                    auto start_offset = cells_vector.size();
                                    self->repeater_1.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->layout_item_info(slint::cbindgen_private::Orientation::Vertical, std::nullopt)); });
                                    cells_vector.resize(start_offset + self->repeater_1.len());
                                } slint::cbindgen_private::Slice<slint::cbindgen_private::LayoutItemInfo>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::box_layout_info_ortho(cells,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(5, 5)); }();
                        });
    self->field_root_3_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&]{ [[maybe_unused]] auto layout_info_2 = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info_2.max, layout_info_2.max_percent, std::max<float>(32, self->field_root_3_i_layout_6_layoutinfo_h.get().min), layout_info_2.min_percent, layout_info_2.preferred, 0); }() + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_3_i_layout_6_layoutinfo_h.get()));
                        });
    self->field_root_3_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&]{ [[maybe_unused]] auto layout_info_3 = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info_3.max, layout_info_3.max_percent, std::max<float>(32, self->field_root_3_i_layout_6_layoutinfo_v.get().min), layout_info_3.min_percent, layout_info_3.preferred, 0); }() + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_3_i_layout_6_layoutinfo_v.get()));
                        });
    self->field_root_3_pressed.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_i_focus_scope_12.enabled.get() && self->field_i_touch_area_11.pressed.get());
                        });
    self->field_root_3_state.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (! self->field_i_focus_scope_12.enabled.get() ? 1 : (self->field_root_3_pressed.get() ? 2 : (self->field_i_touch_area_11.has_hover.get() ? 3 : (self->field_root_3_checked.get() ? 4 : 0))));
                        });
    self->field_root_3_text_color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_3_state = self->field_root_3_state.get();;return (std::abs(float(tmp_root_3_state - 1)) < std::numeric_limits<float>::epsilon() ? (self->field_root_3_checked.get() ? slint::Brush((self->globals->global_FluentPalette_249->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+2.281701375e9) : slint::Color::from_argb_encoded(+4.294967295e9))) : slint::Brush((self->globals->global_FluentPalette_249->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+1.593835519e9) : slint::Color::from_argb_encoded(+1.577058304e9)))) : (std::abs(float(tmp_root_3_state - 2)) < std::numeric_limits<float>::epsilon() ? (self->field_root_3_checked.get() ? slint::Brush((self->globals->global_FluentPalette_249->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+2.147483648e9) : slint::Color::from_argb_encoded(+3.019898879e9))) : slint::Brush((self->globals->global_FluentPalette_249->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+3.388997631e9) : slint::Color::from_argb_encoded(+2.566914048e9)))) : (std::abs(float(tmp_root_3_state - 4)) < std::numeric_limits<float>::epsilon() ? slint::Brush((self->globals->global_FluentPalette_249->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+4.27819008e9) : slint::Color::from_argb_encoded(+4.294967295e9))) : (self->field_root_3_checked.get() ? slint::Brush((self->globals->global_FluentPalette_249->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+4.27819008e9) : slint::Color::from_argb_encoded(+4.294967295e9))) : slint::Brush((self->globals->global_FluentPalette_249->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+4.294967295e9) : slint::Color::from_argb_encoded(+3.85875968e9))))))); }();
                        });
    self->field_i_background_4.background.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_3_state = self->field_root_3_state.get();;return (std::abs(float(tmp_root_3_state - 1)) < std::numeric_limits<float>::epsilon() ? (self->field_root_3_checked.get() ? slint::Brush((self->globals->global_FluentPalette_249->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(704643071) : slint::Color::from_argb_encoded(939524096))) : slint::Brush((self->globals->global_FluentPalette_249->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(184549375) : slint::Color::from_argb_encoded(+1.308228089e9)))) : (std::abs(float(tmp_root_3_state - 2)) < std::numeric_limits<float>::epsilon() ? (self->field_root_3_checked.get() ? self->globals->global_FluentPalette_249->field_accent_background.get().with_alpha(0.8) : slint::Brush((self->globals->global_FluentPalette_249->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(150994943) : slint::Color::from_argb_encoded(+1.308228089e9)))) : (std::abs(float(tmp_root_3_state - 3)) < std::numeric_limits<float>::epsilon() ? (self->field_root_3_checked.get() ? self->globals->global_FluentPalette_249->field_accent_background.get().with_alpha(0.9) : slint::Brush((self->globals->global_FluentPalette_249->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(352321535) : slint::Color::from_argb_encoded(+2.163866105e9)))) : (std::abs(float(tmp_root_3_state - 4)) < std::numeric_limits<float>::epsilon() ? self->globals->global_FluentPalette_249->field_accent_background.get() : slint::Brush((self->globals->global_FluentPalette_249->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(268435455) : slint::Color::from_argb_encoded(+3.019898879e9))))))); }();
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_i_background_4.border_radius.set(4);
    self->field_i_border_5.border_color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_3_state = self->field_root_3_state.get();;return (std::abs(float(tmp_root_3_state - 1)) < std::numeric_limits<float>::epsilon() ? (self->field_root_3_checked.get() ? slint::Brush(slint::Color::from_argb_encoded(0)) : slint::Brush((self->globals->global_FluentPalette_249->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(352321535) : slint::Color::from_argb_encoded(+1.92937984e9)))) : (std::abs(float(tmp_root_3_state - 2)) < std::numeric_limits<float>::epsilon() ? slint::Brush((self->globals->global_FluentPalette_249->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(352321535) : slint::Color::from_argb_encoded(+1.92937984e9))) : (std::abs(float(tmp_root_3_state - 4)) < std::numeric_limits<float>::epsilon() ? (self->globals->global_FluentPalette_249->field_dark_color_scheme.get() ? [&] { const slint::private_api::GradientStop stops[] = { slint::private_api::GradientStop{ slint::Color::from_argb_encoded(352321535), float(0.9067000000000001), }, slint::private_api::GradientStop{ slint::Color::from_argb_encoded(603979776), float(1), } }; return slint::Brush(slint::private_api::LinearGradientBrush(180, stops, 2)); }() : [&] { const slint::private_api::GradientStop stops[] = { slint::private_api::GradientStop{ slint::Color::from_argb_encoded(352321535), float(0.9067000000000001), }, slint::private_api::GradientStop{ slint::Color::from_argb_encoded(+1.711276032e9), float(1), } }; return slint::Brush(slint::private_api::LinearGradientBrush(180, stops, 2)); }()) : (self->globals->global_FluentPalette_249->field_dark_color_scheme.get() ? [&] { const slint::private_api::GradientStop stops[] = { slint::private_api::GradientStop{ slint::Color::from_argb_encoded(402653183), float(0), }, slint::private_api::GradientStop{ slint::Color::from_argb_encoded(301989888), float(0.0833), } }; return slint::Brush(slint::private_api::LinearGradientBrush(180, stops, 2)); }() : [&] { const slint::private_api::GradientStop stops[] = { slint::private_api::GradientStop{ slint::Color::from_argb_encoded(251658240), float(0.9058), }, slint::private_api::GradientStop{ slint::Color::from_argb_encoded(687865856), float(1), } }; return slint::Brush(slint::private_api::LinearGradientBrush(180, stops, 2)); }())))); }();
                        });
    self->field_i_border_5.border_radius.set(4);
    self->field_i_border_5.border_width.set(1);
    self->field_i_touch_area_11.clicked.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    [&]{ ;self->field_root_3_clicked.call(); }();
                });
    self->field_i_focus_scope_12.enabled.set(true);
    self->field_i_focus_scope_12.focus_on_click.set(true);
    self->field_i_focus_scope_12.focus_on_tab_navigation.set(true);
    self->field_i_focus_scope_12.key_pressed.set_handler(
                [this]([[maybe_unused]] slint::language::KeyEvent arg_0) {
                    [[maybe_unused]] auto self = this;
                    return (! ((arg_0.text == slint::SharedString(u8" ")) || (arg_0.text == slint::SharedString(u8"\n"))) ? slint::cbindgen_private::EventResult::Reject : [&]{ self->field_i_touch_area_11.clicked.call();return slint::cbindgen_private::EventResult::Accept; }());
                });
    self->field_root_3_icon.set_constant();
    self->field_i_background_4.border_color.set_constant();
    self->field_i_background_4.border_radius.set_constant();
    self->field_i_background_4.border_width.set_constant();
    self->field_i_border_5.background.set_constant();
    self->field_i_border_5.border_radius.set_constant();
    self->field_i_border_5.border_width.set_constant();
    self->field_i_touch_area_11.mouse_cursor.set_constant();
    self->field_i_focus_scope_12.focus_on_click.set_constant();
    self->field_i_focus_scope_12.focus_on_tab_navigation.set_constant();
    self->repeater_0.set_model_binding([self] { (void)self; return ((slint::Image().size().width > 0) && (slint::Image().size().height > 0)); });
    self->repeater_1.set_model_binding([self] { (void)self; return (self->field_root_3_text.get() != slint::SharedString(u8"")); });
    self->repeater_2.set_model_binding([self] { (void)self; return (self->field_i_focus_scope_12.has_focus.get() && self->field_i_focus_scope_12.enabled.get()); });
}

auto Button_root_3::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

auto Button_root_3::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&]{ [[maybe_unused]] auto layout_info = self->field_root_3_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->field_root_3_i_layout_6_layoutinfo_h.get().min), layout_info.min_percent, layout_info.preferred, 0); }() : [&]{ [[maybe_unused]] auto layout_info = self->fn_layoutinfo_v_with_constraint(self->field_root_3_layoutinfo_h.get().preferred);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->field_root_3_i_layout_6_layoutinfo_v.get().min), layout_info.min_percent, layout_info.preferred, 0); }();
}

auto Button_root_3::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_3_height.get()), float(self->field_root_3_width.get()), float(self->field_root_3_x.get()), float(0)));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_3_height.get()), float(self->field_root_3_width.get()), float(0), float(0)));
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_3_height.get()), float(self->field_root_3_width.get()), float(0), float(0)));
        case 3: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_3_height.get()), float(0), float(0), float(0)));
        case 5: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_3_height.get()), float(self->field_root_3_width.get()), float(0), float(0)));
    }
    return {};
}

auto Button_root_3::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::cbindgen_private::AccessibleRole::Button;
    }
    return {};
}

auto Button_root_3::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Checkable): return (false ? slint::SharedString(u8"true") : slint::SharedString(u8"false"));
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Checked): return (self->field_root_3_checked.get() ? slint::SharedString(u8"true") : slint::SharedString(u8"false"));
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Enabled): return (self->field_i_focus_scope_12.enabled.get() ? slint::SharedString(u8"true") : slint::SharedString(u8"false"));
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->field_root_3_text.get();
    }
    return {};
}

auto Button_root_3::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibilityAction::Tag::Default): return self->field_root_3_accessible_action_default.call();
    }
    return ;
}

auto Button_root_3::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::cbindgen_private::SupportedAccessibilityAction_Default;
    }
    return {};
}

auto Button_root_3::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

auto Button_root_3::ensure_instantiated () const -> bool{
    [[maybe_unused]] auto self = this;
    bool _changed = false;
    _changed |= self->repeater_0.ensure_updated(self);
    _changed |= self->repeater_1.ensure_updated(self);
    _changed |= self->repeater_2.ensure_updated(self);
    return _changed;
}

auto Button_root_3::visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t{
        auto self = this;
        switch(dyn_index) { 
        case 0: {
                return self->repeater_0.visit(order, visitor);
            }
        case 1: {
                return self->repeater_1.visit(order, visitor);
            }
        case 2: {
                return self->repeater_2.visit(order, visitor);
            } };
        std::abort();
}

auto Button_root_3::subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.track_instance_changes();
                return self->repeater_0.index_range();
            }
        case 1: {
                self->repeater_1.track_instance_changes();
                return self->repeater_1.index_range();
            }
        case 2: {
                self->repeater_2.track_instance_changes();
                return self->repeater_2.index_range();
            } };
        std::abort();
}

auto Button_root_3::subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                *result = self->repeater_0.instance_at(subtree_index);
                return;
            }
        case 1: {
                *result = self->repeater_1.instance_at(subtree_index);
                return;
            }
        case 2: {
                *result = self->repeater_2.instance_at(subtree_index);
                return;
            } };
        std::abort();
}

FluentPalette_249::FluentPalette_249 (const class SharedGlobals *globals)
 : globals(globals)
{
}

auto FluentPalette_249::init () -> void{
    (void)this->globals;
    this->field_accent_background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush((this->field_dark_color_scheme.get() ? this->fn_accentify(slint::Color::from_argb_encoded(+4.284534271e9)) : this->fn_accentify(slint::Color::from_argb_encoded(+4.278214584e9))));
                        });
    this->field_dark_color_scheme.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_FluentPalette_249_color_scheme = [&]{ auto _root = (*this->globals->root_weak.lock()).into_dyn(); return slint::cbindgen_private::slint_context_color_scheme(&_root); }();;return (! (tmp_FluentPalette_249_color_scheme == slint::cbindgen_private::ColorScheme::Unknown) ? (tmp_FluentPalette_249_color_scheme == slint::cbindgen_private::ColorScheme::Dark) : ([&]{ auto _root = (*this->globals->root_weak.lock()).into_dyn(); return slint::cbindgen_private::slint_context_color_scheme(&_root); }() == slint::cbindgen_private::ColorScheme::Dark)); }();
                        });
}

auto FluentPalette_249::fn_accentify ([[maybe_unused]] slint::Color arg_0) const -> slint::Color{
    [[maybe_unused]] auto self = this;
    return [&]{ [[maybe_unused]] auto local_accent_color = [&]{ auto _root = (*this->globals->root_weak.lock()).into_dyn(); slint::Color col; slint::cbindgen_private::slint_context_accent_color(&_root, &col); return col; }();;return (! (local_accent_color.to_argb_uint().alpha > 0) ? arg_0 : [&]{ [[maybe_unused]] auto local_default_lch = arg_0.to_oklch();;[[maybe_unused]] auto local_accent_lch = local_accent_color.to_oklch();;return slint::Color::from_oklch(std::clamp(static_cast<float>(local_default_lch.lightness), 0.f, 1.f), std::max(static_cast<float>(local_accent_lch.chroma), 0.f), static_cast<float>(local_accent_lch.hue), std::clamp(static_cast<float>(1), 0.f, 1.f)); }()); }();
}

const slint::private_api::ItemTreeVTable MainWindow::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, ensure_instantiated, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<MainWindow>, slint::private_api::dealloc };

auto MainWindow::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    this->field_button_62.init(globals, self_weak.into_dyn(), tree_index_of_first_child + 39 - 1, tree_index_of_first_child + 44 - 1);
    this->field_button_63.init(globals, self_weak.into_dyn(), tree_index_of_first_child + 40 - 1, tree_index_of_first_child + 51 - 1);
    this->field_button_64.init(globals, self_weak.into_dyn(), tree_index_of_first_child + 41 - 1, tree_index_of_first_child + 58 - 1);
    self->field_root_15.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.294046443e9)));
    self->field_root_15_compare_flag.set(slint::SharedString(u8"SAME"));
    self->field_root_15_current_instruction.set(slint::SharedString(u8"LOAD R4, [R0]"));
    self->field_root_15_cycle_count.set(slint::private_api::saturating_float_to_int(0));
    self->field_root_15_empty_101_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_102), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 103 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(52, layout_info.max_percent, 52, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_103), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 104 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_104), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 105 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(84, layout_info.max_percent, 84, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 3), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), ((self->field_root_15_rectangle_85_width.get() -(float) 16) -(float) 16), 0),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_101_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_102), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 103 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(52, layout_info.max_percent, 52, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_103), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 104 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_104), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 105 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(84, layout_info.max_percent, 84, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 3),0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_101_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_102), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 103 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_103), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 104 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_104), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 105 - 1)) ) }.data(), 3),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_105_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_106), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 106 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(52, layout_info.max_percent, 52, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_107), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 107 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_108), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 108 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(84, layout_info.max_percent, 84, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 3), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), ((self->field_root_15_rectangle_85_width.get() -(float) 16) -(float) 16), 0),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_105_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_106), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 106 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(52, layout_info.max_percent, 52, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_107), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 107 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_108), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 108 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(84, layout_info.max_percent, 84, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 3),0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_105_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_106), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 106 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_107), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 107 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_108), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 108 - 1)) ) }.data(), 3),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_109_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_110), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 109 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(52, layout_info.max_percent, 52, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_111), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 110 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_112), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 111 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(84, layout_info.max_percent, 84, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 3), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), ((self->field_root_15_rectangle_85_width.get() -(float) 16) -(float) 16), 0),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_109_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_110), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 109 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(52, layout_info.max_percent, 52, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_111), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 110 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_112), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 111 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(84, layout_info.max_percent, 84, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 3),0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_109_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_110), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 109 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_111), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 110 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_112), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 111 - 1)) ) }.data(), 3),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_113_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_114), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 112 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(52, layout_info.max_percent, 52, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_115), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 113 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_116), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 114 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(84, layout_info.max_percent, 84, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 3), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), ((self->field_root_15_rectangle_85_width.get() -(float) 16) -(float) 16), 0),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_113_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_114), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 112 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(52, layout_info.max_percent, 52, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_115), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 113 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_116), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 114 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(84, layout_info.max_percent, 84, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 3),0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_113_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_114), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 112 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_115), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 113 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_116), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 114 - 1)) ) }.data(), 3),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_117_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_118), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 115 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(52, layout_info.max_percent, 52, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_119), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 116 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_120), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 117 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(84, layout_info.max_percent, 84, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 3), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), ((self->field_root_15_rectangle_85_width.get() -(float) 16) -(float) 16), 0),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_117_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_118), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 115 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(52, layout_info.max_percent, 52, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_119), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 116 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_120), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 117 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(84, layout_info.max_percent, 84, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 3),0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_117_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_118), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 115 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_119), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 116 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_120), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 117 - 1)) ) }.data(), 3),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_121_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_122), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 118 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(52, layout_info.max_percent, 52, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_123), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 119 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_124), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 120 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(84, layout_info.max_percent, 84, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 3), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), ((self->field_root_15_rectangle_85_width.get() -(float) 16) -(float) 16), 0),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_121_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_122), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 118 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(52, layout_info.max_percent, 52, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_123), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 119 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_124), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 120 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(84, layout_info.max_percent, 84, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 3),0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_121_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_122), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 118 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_123), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 119 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_124), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 120 - 1)) ) }.data(), 3),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_126_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 4>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(7, layout_info.max_percent, 7, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_128), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 122 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_130), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 124 - 1)) ) }.data(), 4), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), ((self->field_root_15_rectangle_85_width.get() -(float) 16) -(float) 16), 0),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_126_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 4>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(7, layout_info.max_percent, 7, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_128), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 122 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_130), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 124 - 1)) ) }.data(), 4),0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_126_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 4>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(7, layout_info.max_percent, 7, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_128), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 122 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_130), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 124 - 1)) ) }.data(), 4),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_132_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 8>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_133_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(30, layout_info.max_percent, 30, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(1, layout_info.max_percent, 1, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_138_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(42, layout_info.max_percent, 42, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_148), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 128 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(18, layout_info.max_percent, 18, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_149_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(31, layout_info.max_percent, 31, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_155_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(31, layout_info.max_percent, 31, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_161_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(31, layout_info.max_percent, 31, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_167_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(31, layout_info.max_percent, 31, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 8), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(16, 16), 312, 9),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_132_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 8>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_133_layoutinfo_h.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_138_layoutinfo_h.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_148), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 128 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_149_layoutinfo_h.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_155_layoutinfo_h.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_161_layoutinfo_h.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_167_layoutinfo_h.get()) ) }.data(), 8),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(16, 16));
                        });
    self->field_root_15_empty_132_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 8>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_133_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(30, layout_info.max_percent, 30, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(1, layout_info.max_percent, 1, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_138_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(42, layout_info.max_percent, 42, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_148), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 128 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(18, layout_info.max_percent, 18, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_149_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(31, layout_info.max_percent, 31, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_155_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(31, layout_info.max_percent, 31, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_161_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(31, layout_info.max_percent, 31, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_167_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(31, layout_info.max_percent, 31, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 8),9,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(16, 16),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_133_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_134), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 133 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_136), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 135 - 1)) ) }.data(), 3), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), ((self->field_root_15_empty_84_layout_cache.get()[3] -(float) 16) -(float) 16), 0),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_133_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_134), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 133 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_136), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 135 - 1)) ) }.data(), 3),0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_133_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_134), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 133 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_136), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 135 - 1)) ) }.data(), 3),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_138_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_140_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(8, layout_info.max_percent, 8, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_145_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ) }.data(), 3), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), ((self->field_root_15_empty_84_layout_cache.get()[3] -(float) 16) -(float) 16), 0),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_138_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_140_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(8, layout_info.max_percent, 8, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_145_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ) }.data(), 3),0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_138_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_140_layoutinfo_v.get())) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_145_layoutinfo_v.get())) ) }.data(), 3),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_140_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_141), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 139 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_142), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 140 - 1)) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(6, 6), 42, 2),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_140_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_141), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 139 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_142), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 140 - 1)) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(6, 6));
                        });
    self->field_root_15_empty_140_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_141), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 139 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_142), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 140 - 1)) ) }.data(), 2),2,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(6, 6),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_145_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_146), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 141 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_147), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 142 - 1)) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(6, 6), 42, 2),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_145_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_146), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 141 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_147), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 142 - 1)) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(6, 6));
                        });
    self->field_root_15_empty_145_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_146), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 141 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_147), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 142 - 1)) ) }.data(), 2),2,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(6, 6),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_149_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 4>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_rectangle_150_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(44, layout_info.max_percent, 44, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(8, layout_info.max_percent, 8, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_153), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 145 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_154), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 146 - 1)) ) }.data(), 4), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), ((self->field_root_15_empty_84_layout_cache.get()[3] -(float) 16) -(float) 16), 0),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_149_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 4>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_rectangle_150_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(44, layout_info.max_percent, 44, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(8, layout_info.max_percent, 8, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_153), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 145 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_154), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 146 - 1)) ) }.data(), 4),0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_149_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 4>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_rectangle_150_layoutinfo_v.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_153), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 145 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_154), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 146 - 1)) ) }.data(), 4),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_155_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 4>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_rectangle_156_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(44, layout_info.max_percent, 44, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(8, layout_info.max_percent, 8, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_159), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 150 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_160), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 151 - 1)) ) }.data(), 4), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), ((self->field_root_15_empty_84_layout_cache.get()[3] -(float) 16) -(float) 16), 0),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_155_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 4>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_rectangle_156_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(44, layout_info.max_percent, 44, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(8, layout_info.max_percent, 8, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_159), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 150 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_160), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 151 - 1)) ) }.data(), 4),0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_155_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 4>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_rectangle_156_layoutinfo_v.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_159), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 150 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_160), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 151 - 1)) ) }.data(), 4),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_16_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_18_layoutinfo_v.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(66, layout_info.max_percent, 66, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_28_layoutinfo_v.get()) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), self->field_root_15.height.get(), 0),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_16_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_18_layoutinfo_h.get())) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_28_layoutinfo_h.get()) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_16_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_18_layoutinfo_v.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(66, layout_info.max_percent, 66, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_28_layoutinfo_v.get()) ) }.data(), 2),0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_16_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15.width.get();
                        });
    self->field_root_15_empty_161_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 4>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_rectangle_162_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(44, layout_info.max_percent, 44, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(8, layout_info.max_percent, 8, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_165), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 155 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_166), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 156 - 1)) ) }.data(), 4), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), ((self->field_root_15_empty_84_layout_cache.get()[3] -(float) 16) -(float) 16), 0),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_161_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 4>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_rectangle_162_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(44, layout_info.max_percent, 44, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(8, layout_info.max_percent, 8, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_165), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 155 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_166), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 156 - 1)) ) }.data(), 4),0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_161_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 4>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_rectangle_162_layoutinfo_v.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_165), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 155 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_166), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 156 - 1)) ) }.data(), 4),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_167_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 4>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_rectangle_168_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(44, layout_info.max_percent, 44, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(8, layout_info.max_percent, 8, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_171), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 160 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_172), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 161 - 1)) ) }.data(), 4), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), ((self->field_root_15_empty_84_layout_cache.get()[3] -(float) 16) -(float) 16), 0),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_167_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 4>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_rectangle_168_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(44, layout_info.max_percent, 44, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(8, layout_info.max_percent, 8, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_171), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 160 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_172), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 161 - 1)) ) }.data(), 4),0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_167_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 4>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_rectangle_168_layoutinfo_v.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_171), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 160 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_172), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 161 - 1)) ) }.data(), 4),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_173_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_56_layout_cache.get()[7];
                        });
    self->field_root_15_empty_173_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_175_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 6); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_214_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 5); }()) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), ((self->field_root_15_rectangle_55_width.get() -(float) 24) -(float) 24), 12),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_173_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_175_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 6); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_214_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 5); }()) ) }.data(), 2),12,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_173_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_175_layoutinfo_v.get())) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_214_layoutinfo_v.get())) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_175_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_176_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(28, layout_info.max_percent, 28, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_180_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(16, 16), self->field_root_15_empty_173_height.get(), 10),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_175_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_176_layoutinfo_h.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_180_layoutinfo_h.get()) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(16, 16));
                        });
    self->field_root_15_empty_175_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_176_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(28, layout_info.max_percent, 28, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_180_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ) }.data(), 2),10,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(16, 16),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_176_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_177), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 167 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_179), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 169 - 1)) ) }.data(), 3), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), ((self->field_root_15_empty_173_layout_cache.get()[1] -(float) 16) -(float) 16), 0),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_176_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_177), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 167 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_179), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 169 - 1)) ) }.data(), 3),0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_176_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_177), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 167 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_179), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 169 - 1)) ) }.data(), 3),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_18_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 7>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_rectangle_19_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(34, layout_info.max_percent, 34, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_21), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 4 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(1, layout_info.max_percent, 1, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_23), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 6 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_rectangle_25_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(94, layout_info.max_percent, 94, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_27), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 9 - 1)) ) }.data(), 7), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(24, 24), self->field_root_15_rectangle_17_width.get(), 14),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_18_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 7>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_rectangle_19_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(34, layout_info.max_percent, 34, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_21), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 4 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(1, layout_info.max_percent, 1, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_23), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 6 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_rectangle_25_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(94, layout_info.max_percent, 94, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_27), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 9 - 1)) ) }.data(), 7),14,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(24, 24),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_18_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 7>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_rectangle_19_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(34, layout_info.max_percent, 34, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_21), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 4 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(24, layout_info.max_percent, 24, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_23), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 6 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_rectangle_25_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(28, layout_info.max_percent, 28, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_27), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 9 - 1)) ) }.data(), 7),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_180_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_175_layout_cache.get()[3];
                        });
    self->field_root_15_empty_180_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 8>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_182_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_186_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_190_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_194_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_198_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_202_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_206_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_210_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ) }.data(), 8), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), ((self->field_root_15_empty_173_layout_cache.get()[1] -(float) 16) -(float) 16), 6),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_180_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 8>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_182_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_186_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_190_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_194_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_198_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_202_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_206_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_210_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ) }.data(), 8),6,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_180_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 8>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_182_layoutinfo_v.get())) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_186_layoutinfo_v.get())) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_190_layoutinfo_v.get())) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_194_layoutinfo_v.get())) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_198_layoutinfo_v.get())) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_202_layoutinfo_v.get())) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_206_layoutinfo_v.get())) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_210_layoutinfo_v.get())) ) }.data(), 8),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_182_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_183), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 178 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_184), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 179 - 1)) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8), self->field_root_15_empty_180_height.get(), 6),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_182_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_183), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 178 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_184), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 179 - 1)) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8));
                        });
    self->field_root_15_empty_182_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_183), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 178 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_184), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 179 - 1)) ) }.data(), 2),6,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_186_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_187), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 180 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_188), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 181 - 1)) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8), self->field_root_15_empty_180_height.get(), 6),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_186_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_187), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 180 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_188), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 181 - 1)) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8));
                        });
    self->field_root_15_empty_186_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_187), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 180 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_188), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 181 - 1)) ) }.data(), 2),6,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_190_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_191), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 182 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_192), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 183 - 1)) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8), self->field_root_15_empty_180_height.get(), 6),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_190_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_191), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 182 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_192), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 183 - 1)) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8));
                        });
    self->field_root_15_empty_190_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_191), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 182 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_192), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 183 - 1)) ) }.data(), 2),6,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_194_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_195), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 184 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_196), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 185 - 1)) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8), self->field_root_15_empty_180_height.get(), 6),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_194_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_195), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 184 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_196), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 185 - 1)) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8));
                        });
    self->field_root_15_empty_194_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_195), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 184 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_196), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 185 - 1)) ) }.data(), 2),6,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_198_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_199), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 186 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_200), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 187 - 1)) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8), self->field_root_15_empty_180_height.get(), 6),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_198_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_199), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 186 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_200), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 187 - 1)) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8));
                        });
    self->field_root_15_empty_198_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_199), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 186 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_200), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 187 - 1)) ) }.data(), 2),6,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_202_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_203), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 188 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_204), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 189 - 1)) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8), self->field_root_15_empty_180_height.get(), 6),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_202_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_203), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 188 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_204), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 189 - 1)) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8));
                        });
    self->field_root_15_empty_202_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_203), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 188 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_204), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 189 - 1)) ) }.data(), 2),6,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_206_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_207), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 190 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_208), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 191 - 1)) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8), self->field_root_15_empty_180_height.get(), 6),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_206_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_207), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 190 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_208), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 191 - 1)) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8));
                        });
    self->field_root_15_empty_206_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_207), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 190 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_208), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 191 - 1)) ) }.data(), 2),6,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_210_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_211), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 192 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_212), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 193 - 1)) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8), self->field_root_15_empty_180_height.get(), 6),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_210_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_211), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 192 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_212), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 193 - 1)) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8));
                        });
    self->field_root_15_empty_210_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_211), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 192 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_212), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 193 - 1)) ) }.data(), 2),6,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_214_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 5>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_215_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(28, layout_info.max_percent, 28, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_220_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(22, layout_info.max_percent, 22, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_226_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(22, layout_info.max_percent, 22, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_233_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(32, layout_info.max_percent, 32, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 5), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(16, 16), self->field_root_15_empty_173_height.get(), 11),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_214_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 5>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_215_layoutinfo_h.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_220_layoutinfo_h.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_226_layoutinfo_h.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_233_layoutinfo_h.get()) ) }.data(), 5),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(16, 16));
                        });
    self->field_root_15_empty_214_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 5>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_215_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(28, layout_info.max_percent, 28, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_220_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(22, layout_info.max_percent, 22, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_226_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(22, layout_info.max_percent, 22, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_233_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(32, layout_info.max_percent, 32, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 5),11,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(16, 16),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_215_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 4>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_216), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 199 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_218), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 201 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_219), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 202 - 1)) ) }.data(), 4), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), ((self->field_root_15_empty_173_layout_cache.get()[3] -(float) 16) -(float) 16), 0),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_215_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 4>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_216), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 199 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_218), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 201 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_219), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 202 - 1)) ) }.data(), 4),0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_215_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 4>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_216), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 199 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_218), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 201 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_219), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 202 - 1)) ) }.data(), 4),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_220_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_221), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 203 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(82, layout_info.max_percent, 82, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&]{ [[maybe_unused]] auto cell_layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(std::max<float>(cell_layout_info.max, cell_layout_info.min), 100, cell_layout_info.min, 0, std::max<float>(std::min<float>(cell_layout_info.preferred, std::max<float>(cell_layout_info.max, cell_layout_info.min)), cell_layout_info.min), 1); }();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_225), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 205 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(34, layout_info.max_percent, 34, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 3), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), ((self->field_root_15_empty_173_layout_cache.get()[3] -(float) 16) -(float) 16), 0),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_220_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_221), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 203 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(82, layout_info.max_percent, 82, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&]{ [[maybe_unused]] auto cell_layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(std::max<float>(cell_layout_info.max, cell_layout_info.min), 100, cell_layout_info.min, 0, std::max<float>(std::min<float>(cell_layout_info.preferred, std::max<float>(cell_layout_info.max, cell_layout_info.min)), cell_layout_info.min), 1); }();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_225), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 205 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(34, layout_info.max_percent, 34, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 3),0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_220_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_221), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 203 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&]{ [[maybe_unused]] auto cell_layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;[[maybe_unused]] auto cell_size = 7;;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, cell_size, 0, std::max<float>(std::min<float>(cell_size, cell_size), cell_size), cell_layout_info.stretch); }();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(22, layout_info.max_percent, 22, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_225), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 205 - 1)) ) }.data(), 3),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_226_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_227), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 208 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(82, layout_info.max_percent, 82, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&]{ [[maybe_unused]] auto cell_layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(std::max<float>(cell_layout_info.max, cell_layout_info.min), 100, cell_layout_info.min, 0, std::max<float>(std::min<float>(cell_layout_info.preferred, std::max<float>(cell_layout_info.max, cell_layout_info.min)), cell_layout_info.min), 1); }();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_231), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 210 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(34, layout_info.max_percent, 34, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 3), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), ((self->field_root_15_empty_173_layout_cache.get()[3] -(float) 16) -(float) 16), 0),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_226_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_227), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 208 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(82, layout_info.max_percent, 82, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&]{ [[maybe_unused]] auto cell_layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(std::max<float>(cell_layout_info.max, cell_layout_info.min), 100, cell_layout_info.min, 0, std::max<float>(std::min<float>(cell_layout_info.preferred, std::max<float>(cell_layout_info.max, cell_layout_info.min)), cell_layout_info.min), 1); }();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_231), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 210 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(34, layout_info.max_percent, 34, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 3),0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_226_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_227), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 208 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&]{ [[maybe_unused]] auto cell_layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;[[maybe_unused]] auto cell_size = 7;;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, cell_size, 0, std::max<float>(std::min<float>(cell_size, cell_size), cell_size), cell_layout_info.stretch); }();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(22, layout_info.max_percent, 22, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_231), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 210 - 1)) ) }.data(), 3),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_233_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 5>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_235_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(6, layout_info.max_percent, 6, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_240_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(6, layout_info.max_percent, 6, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_245_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ) }.data(), 5), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), ((self->field_root_15_empty_173_layout_cache.get()[3] -(float) 16) -(float) 16), 0),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_233_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 5>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_235_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(6, layout_info.max_percent, 6, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_240_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(6, layout_info.max_percent, 6, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_245_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ) }.data(), 5),0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_233_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 5>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_235_layoutinfo_v.get())) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_240_layoutinfo_v.get())) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_245_layoutinfo_v.get())) ) }.data(), 5),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_235_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_236), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 218 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_237), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 219 - 1)) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(5, 5), 32, 1),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_235_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_236), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 218 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_237), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 219 - 1)) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(5, 5));
                        });
    self->field_root_15_empty_235_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_236), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 218 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_237), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 219 - 1)) ) }.data(), 2),1,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(5, 5),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_240_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_241), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 220 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_242), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 221 - 1)) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(5, 5), 32, 1),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_240_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_241), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 220 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_242), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 221 - 1)) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(5, 5));
                        });
    self->field_root_15_empty_240_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_241), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 220 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_242), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 221 - 1)) ) }.data(), 2),1,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(5, 5),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_245_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_246), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 222 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_247), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 223 - 1)) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(5, 5), 32, 1),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_245_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_246), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 222 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_247), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 223 - 1)) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(5, 5));
                        });
    self->field_root_15_empty_245_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_246), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 222 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_247), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 223 - 1)) ) }.data(), 2),1,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(5, 5),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_28_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_16_layout_cache.get()[3];
                        });
    self->field_root_15_empty_28_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_30_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(210, layout_info.max_percent, 210, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_56_layoutinfo_h.get())) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), self->field_root_15_empty_16_width.get(), 0),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_28_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_30_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(210, layout_info.max_percent, 210, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_56_layoutinfo_h.get())) ) }.data(), 2),0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_28_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_30_layoutinfo_v.get())) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_56_layoutinfo_v.get())) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_30_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 9>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_31), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 14 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(28, layout_info.max_percent, 28, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_33_layoutinfo_v.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(40, layout_info.max_percent, 40, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_37_layoutinfo_v.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(40, layout_info.max_percent, 40, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_41_layoutinfo_v.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(40, layout_info.max_percent, 40, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_45_layoutinfo_v.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(40, layout_info.max_percent, 40, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(1, layout_info.max_percent, 1, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_50), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 21 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(34, layout_info.max_percent, 34, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_52_layoutinfo_v.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(58, layout_info.max_percent, 58, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 9), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(18, 18), self->field_root_15_empty_28_height.get(), 5),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_30_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 9>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_31), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 14 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_33_layoutinfo_h.get())) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_37_layoutinfo_h.get())) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_41_layoutinfo_h.get())) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_45_layoutinfo_h.get())) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_50), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 21 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_52_layoutinfo_h.get())) ) }.data(), 9),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(18, 18));
                        });
    self->field_root_15_empty_30_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 9>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_31), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 14 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(28, layout_info.max_percent, 28, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_33_layoutinfo_v.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(40, layout_info.max_percent, 40, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_37_layoutinfo_v.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(40, layout_info.max_percent, 40, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_41_layoutinfo_v.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(40, layout_info.max_percent, 40, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_45_layoutinfo_v.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(40, layout_info.max_percent, 40, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(1, layout_info.max_percent, 1, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_50), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 21 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(34, layout_info.max_percent, 34, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_52_layoutinfo_v.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(58, layout_info.max_percent, 58, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 9),5,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(18, 18),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_33_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_34), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 23 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_35), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 24 - 1)) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(12, 0), 174, 10),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_33_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_34), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 23 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_35), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 24 - 1)) ) }.data(), 2),10,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(12, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_33_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_34), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 23 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_35), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 24 - 1)) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_37_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_38), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 25 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_39), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 26 - 1)) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(12, 0), 174, 10),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_37_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_38), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 25 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_39), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 26 - 1)) ) }.data(), 2),10,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(12, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_37_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_38), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 25 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_39), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 26 - 1)) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_41_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_42), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 27 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_43), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 28 - 1)) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(12, 0), 174, 10),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_41_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_42), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 27 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_43), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 28 - 1)) ) }.data(), 2),10,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(12, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_41_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_42), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 27 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_43), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 28 - 1)) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_45_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_46), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 29 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_47), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 30 - 1)) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(12, 0), 174, 10),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_45_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_46), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 29 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_47), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 30 - 1)) ) }.data(), 2),10,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(12, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_45_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_46), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 29 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_47), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 30 - 1)) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_52_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_53), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 31 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_54), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 32 - 1)) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8), 58, 3),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_52_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_53), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 31 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_54), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 32 - 1)) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8));
                        });
    self->field_root_15_empty_52_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_53), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 31 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_54), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 32 - 1)) ) }.data(), 2),3,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_56_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 4>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_57_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(66, layout_info.max_percent, 66, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_65_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(86, layout_info.max_percent, 86, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_84_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(312, layout_info.max_percent, 312, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_173_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ) }.data(), 4), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(24, 24), self->field_root_15_empty_28_height.get(), 16),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_56_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 4>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_57_layoutinfo_h.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_65_layoutinfo_h.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_84_layoutinfo_h.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_173_layoutinfo_h.get()) ) }.data(), 4),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(24, 24));
                        });
    self->field_root_15_empty_56_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 4>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_57_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(66, layout_info.max_percent, 66, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_65_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(86, layout_info.max_percent, 86, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_84_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(312, layout_info.max_percent, 312, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_173_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ) }.data(), 4),16,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(24, 24),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_57_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 5>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_58_layoutinfo_h.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_button_62.field_root_3_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->field_button_62.field_root_3_i_layout_6_layoutinfo_h.get().min), layout_info.min_percent, layout_info.preferred, 0); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_button_63.field_root_3_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->field_button_63.field_root_3_i_layout_6_layoutinfo_h.get().min), layout_info.min_percent, layout_info.preferred, 0); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_button_64.field_root_3_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->field_button_64.field_root_3_i_layout_6_layoutinfo_h.get().min), layout_info.min_percent, layout_info.preferred, 0); }()) ) }.data(), 5), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), ((self->field_root_15_empty_28_layout_cache.get()[3] -(float) 24) -(float) 24), 12),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_57_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 5>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_58_layoutinfo_h.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_button_62.field_root_3_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->field_button_62.field_root_3_i_layout_6_layoutinfo_h.get().min), layout_info.min_percent, layout_info.preferred, 0); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_button_63.field_root_3_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->field_button_63.field_root_3_i_layout_6_layoutinfo_h.get().min), layout_info.min_percent, layout_info.preferred, 0); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_button_64.field_root_3_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->field_button_64.field_root_3_i_layout_6_layoutinfo_h.get().min), layout_info.min_percent, layout_info.preferred, 0); }()) ) }.data(), 5),12,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_57_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 5>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_58_layoutinfo_v.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_button_62.field_root_3_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->field_button_62.field_root_3_i_layout_6_layoutinfo_v.get().min), layout_info.min_percent, layout_info.preferred, 0); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_button_63.field_root_3_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->field_button_63.field_root_3_i_layout_6_layoutinfo_v.get().min), layout_info.min_percent, layout_info.preferred, 0); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_button_64.field_root_3_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->field_button_64.field_root_3_i_layout_6_layoutinfo_v.get().min), layout_info.min_percent, layout_info.preferred, 0); }()) ) }.data(), 5),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_58_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_59), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 42 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_60), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 43 - 1)) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), 66, 4),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_58_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_59), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 42 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_60), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 43 - 1)) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_58_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_59), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 42 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_60), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 43 - 1)) ) }.data(), 2),4,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_65_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 4>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_67_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_71_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_75_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_81_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ) }.data(), 4), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), ((self->field_root_15_empty_28_layout_cache.get()[3] -(float) 24) -(float) 24), 12),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_65_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 4>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_67_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_71_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_75_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_81_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ) }.data(), 4),12,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_65_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 4>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_67_layoutinfo_v.get())) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_71_layoutinfo_v.get())) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_75_layoutinfo_v.get())) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_81_layoutinfo_v.get())) ) }.data(), 4),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_67_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_68), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 69 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_69), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 70 - 1)) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(13, 13), 86, 5),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_67_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_68), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 69 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_69), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 70 - 1)) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(13, 13));
                        });
    self->field_root_15_empty_67_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_68), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 69 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_69), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 70 - 1)) ) }.data(), 2),5,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(13, 13),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_71_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_72), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 71 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_73), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 72 - 1)) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(13, 13), 86, 5),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_71_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_72), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 71 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_73), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 72 - 1)) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(13, 13));
                        });
    self->field_root_15_empty_71_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_72), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 71 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_73), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 72 - 1)) ) }.data(), 2),5,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(13, 13),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_75_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_76), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 73 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_77_layoutinfo_v.get()) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(13, 13), 86, 5),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_75_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_76), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 73 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_77_layoutinfo_h.get()) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(13, 13));
                        });
    self->field_root_15_empty_75_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_76), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 73 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_77_layoutinfo_v.get()) ) }.data(), 2),5,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(13, 13),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_77_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_78), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 75 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_79), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 76 - 1)) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), ((self->field_root_15_empty_65_layout_cache.get()[5] -(float) 13) -(float) 13), 8),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_77_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_78), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 75 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_79), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 76 - 1)) ) }.data(), 2),8,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_77_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_78), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 75 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_79), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 76 - 1)) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_81_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_82), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 77 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_83), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 78 - 1)) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(13, 13), 86, 5),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_81_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_82), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 77 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_83), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 78 - 1)) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(13, 13));
                        });
    self->field_root_15_empty_81_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_82), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 77 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_83), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 78 - 1)) ) }.data(), 2),5,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(13, 13),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_84_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_86_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 6); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_132_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 5); }()) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), ((self->field_root_15_empty_28_layout_cache.get()[3] -(float) 24) -(float) 24), 12),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_84_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_86_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 6); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_132_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 5); }()) ) }.data(), 2),12,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_84_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_86_layoutinfo_v.get())) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_132_layoutinfo_v.get())) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_86_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 12>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_87_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(30, layout_info.max_percent, 30, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(1, layout_info.max_percent, 1, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_92_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(26, layout_info.max_percent, 26, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_96_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(30, layout_info.max_percent, 30, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_101_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(28, layout_info.max_percent, 28, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_105_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(28, layout_info.max_percent, 28, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_109_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(28, layout_info.max_percent, 28, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_113_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(28, layout_info.max_percent, 28, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_117_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(28, layout_info.max_percent, 28, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_121_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(28, layout_info.max_percent, 28, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_126_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(24, layout_info.max_percent, 24, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 12), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(16, 16), 312, 8),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_86_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 12>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_87_layoutinfo_h.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_92_layoutinfo_h.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_96_layoutinfo_h.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_101_layoutinfo_h.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_105_layoutinfo_h.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_109_layoutinfo_h.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_113_layoutinfo_h.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_117_layoutinfo_h.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_121_layoutinfo_h.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_126_layoutinfo_h.get()) ) }.data(), 12),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(16, 16));
                        });
    self->field_root_15_empty_86_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 12>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_87_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(30, layout_info.max_percent, 30, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(1, layout_info.max_percent, 1, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_92_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(26, layout_info.max_percent, 26, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_96_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(30, layout_info.max_percent, 30, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_101_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(28, layout_info.max_percent, 28, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_105_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(28, layout_info.max_percent, 28, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_109_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(28, layout_info.max_percent, 28, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_113_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(28, layout_info.max_percent, 28, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_117_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(28, layout_info.max_percent, 28, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_121_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(28, layout_info.max_percent, 28, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_126_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(24, layout_info.max_percent, 24, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 12),8,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(16, 16),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_87_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_88), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 93 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_90), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 95 - 1)) ) }.data(), 3), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), ((self->field_root_15_empty_84_layout_cache.get()[1] -(float) 16) -(float) 16), 0),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_87_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_88), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 93 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_90), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 95 - 1)) ) }.data(), 3),0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_87_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_88), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 93 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_90), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 95 - 1)) ) }.data(), 3),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_92_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_93), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 96 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(52, layout_info.max_percent, 52, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_94), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 97 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_95), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 98 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(84, layout_info.max_percent, 84, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 3), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), ((self->field_root_15_empty_84_layout_cache.get()[1] -(float) 16) -(float) 16), 0),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_92_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_93), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 96 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(52, layout_info.max_percent, 52, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_94), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 97 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_95), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 98 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(84, layout_info.max_percent, 84, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 3),0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_92_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_93), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 96 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_94), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 97 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_95), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 98 - 1)) ) }.data(), 3),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_96_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 4>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(3, layout_info.max_percent, 3, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_98), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 100 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(49, layout_info.max_percent, 49, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_99), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 101 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_100), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 102 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(84, layout_info.max_percent, 84, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 4), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), ((self->field_root_15_empty_84_layout_cache.get()[1] -(float) 16) -(float) 16), 0),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_96_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 4>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(3, layout_info.max_percent, 3, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_98), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 100 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(49, layout_info.max_percent, 49, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_99), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 101 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_100), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 102 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(84, layout_info.max_percent, 84, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 4),0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_96_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 4>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(22, layout_info.max_percent, 22, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_98), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 100 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_99), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 101 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_100), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 102 - 1)) ) }.data(), 4),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_executed_count.set(slint::private_api::saturating_float_to_int(0));
    self->field_root_15_l1_evictions.set(slint::private_api::saturating_float_to_int(0));
    self->field_root_15_l1_hits.set(slint::private_api::saturating_float_to_int(0));
    self->field_root_15_l1_misses.set(slint::private_api::saturating_float_to_int(0));
    self->field_root_15_l1_rate.set(slint::SharedString(u8"0.0%"));
    self->field_root_15_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&]{ [[maybe_unused]] auto layout_info_4 = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(WindowItemVTable), const_cast<slint::cbindgen_private::WindowItem*>(&self->field_root_15), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info_4.max, layout_info_4.max_percent, 1080, layout_info_4.min_percent, layout_info_4.preferred, layout_info_4.stretch); }() + self->field_root_15_empty_16_layoutinfo_h.get());
                        });
    self->field_root_15_memory_word_4.set(slint::private_api::saturating_float_to_int(5));
    self->field_root_15_pc_value.set(slint::private_api::saturating_float_to_int(0));
    self->field_root_15_rectangle_150_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_151), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 147 - 1));
                        });
    self->field_root_15_rectangle_150_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_151), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 147 - 1));
                        });
    self->field_root_15_rectangle_156_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_157), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 152 - 1));
                        });
    self->field_root_15_rectangle_156_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_157), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 152 - 1));
                        });
    self->field_root_15_rectangle_162_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_163), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 157 - 1));
                        });
    self->field_root_15_rectangle_162_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_163), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 157 - 1));
                        });
    self->field_root_15_rectangle_168_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_169), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 162 - 1));
                        });
    self->field_root_15_rectangle_168_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_169), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 162 - 1));
                        });
    self->field_root_15_rectangle_17_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15.width.get();
                        });
    self->field_root_15_rectangle_19_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_20), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 10 - 1));
                        });
    self->field_root_15_rectangle_19_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_20), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 10 - 1));
                        });
    self->field_root_15_rectangle_224_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_220_layout_cache.get()[3] -(float) (0.72 * self->field_root_15_empty_220_layout_cache.get()[3])) /(float) 2);
                        });
    self->field_root_15_rectangle_230_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_226_layout_cache.get()[3] -(float) (0.48 * self->field_root_15_empty_226_layout_cache.get()[3])) /(float) 2);
                        });
    self->field_root_15_rectangle_25_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_26), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 11 - 1));
                        });
    self->field_root_15_rectangle_25_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_26), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 11 - 1));
                        });
    self->field_root_15_rectangle_55_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_28_layout_cache.get()[3];
                        });
    self->field_root_15_rectangle_85_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_84_layout_cache.get()[1];
                        });
    self->field_root_15_reg0.set(slint::private_api::saturating_float_to_int(100));
    self->field_root_15_reg0_hex.set(slint::SharedString(u8"0x00000064"));
    self->field_root_15_reg1.set(slint::private_api::saturating_float_to_int(200));
    self->field_root_15_reg1_hex.set(slint::SharedString(u8"0x000000C8"));
    self->field_root_15_reg2.set(slint::private_api::saturating_float_to_int(0));
    self->field_root_15_reg2_hex.set(slint::SharedString(u8"0x00000000"));
    self->field_root_15_reg3.set(slint::private_api::saturating_float_to_int(0));
    self->field_root_15_reg3_hex.set(slint::SharedString(u8"0x00000000"));
    self->field_root_15_task_status.set(slint::SharedString(u8"WORKING"));
    self->field_root_15_text_151_min_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_151), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 147 - 1).min;
                        });
    self->field_root_15_text_151_min_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_151), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 147 - 1).min;
                        });
    self->field_root_15_text_151_preferred_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_151), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 147 - 1).preferred;
                        });
    self->field_root_15_text_151_preferred_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_151), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 147 - 1).preferred;
                        });
    self->field_root_15_text_157_min_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_157), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 152 - 1).min;
                        });
    self->field_root_15_text_157_min_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_157), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 152 - 1).min;
                        });
    self->field_root_15_text_157_preferred_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_157), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 152 - 1).preferred;
                        });
    self->field_root_15_text_157_preferred_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_157), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 152 - 1).preferred;
                        });
    self->field_root_15_text_163_min_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_163), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 157 - 1).min;
                        });
    self->field_root_15_text_163_min_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_163), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 157 - 1).min;
                        });
    self->field_root_15_text_163_preferred_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_163), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 157 - 1).preferred;
                        });
    self->field_root_15_text_163_preferred_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_163), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 157 - 1).preferred;
                        });
    self->field_root_15_text_169_min_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_169), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 162 - 1).min;
                        });
    self->field_root_15_text_169_min_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_169), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 162 - 1).min;
                        });
    self->field_root_15_text_169_preferred_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_169), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 162 - 1).preferred;
                        });
    self->field_root_15_text_169_preferred_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_169), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 162 - 1).preferred;
                        });
    self->field_root_15_text_20_min_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_20), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 10 - 1).min;
                        });
    self->field_root_15_text_20_min_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_20), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 10 - 1).min;
                        });
    self->field_root_15_text_20_preferred_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_20), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 10 - 1).preferred;
                        });
    self->field_root_15_text_20_preferred_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_20), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 10 - 1).preferred;
                        });
    self->field_root_15_text_26_min_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_26), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 11 - 1).min;
                        });
    self->field_root_15_text_26_min_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_26), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 11 - 1).min;
                        });
    self->field_root_15_text_26_preferred_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_26), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 11 - 1).preferred;
                        });
    self->field_root_15_text_26_preferred_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_26), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 11 - 1).preferred;
                        });
    self->field_root_15.title.set(slint::SharedString(u8"MicroLab | Simulator"));
    self->field_rectangle_17.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.280298279e9)));
    self->field_rectangle_19.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.29122674e9)));
    self->field_rectangle_19.border_radius.set(5);
    self->field_text_20.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.280298279e9)));
    self->field_text_20.font_family.set(slint::SharedString(u8"Bahnschrift"));
    self->field_text_20.font_size.set(21);
    self->field_text_20.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_20.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(self->field_root_15_text_20_preferred_height.get(), self->field_root_15_text_20_min_height.get());
                        });
    self->field_text_20.horizontal_alignment.set(slint::cbindgen_private::TextHorizontalAlignment::Center);
    self->field_text_20.line_height_factor.set(1);
    self->field_text_20.text.set(slint::SharedString(u8"M"));
    self->field_text_20.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_20.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(self->field_root_15_text_20_preferred_width.get(), self->field_root_15_text_20_min_width.get());
                        });
    self->field_text_21.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.294243823e9)));
    self->field_text_21.font_family.set(slint::SharedString(u8"Bahnschrift"));
    self->field_text_21.font_size.set(17);
    self->field_text_21.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_21.height.set(66);
    self->field_text_21.line_height_factor.set(1);
    self->field_text_21.text.set(slint::SharedString(u8"Test"));
    self->field_text_21.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_21.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_18_layout_cache.get()[3];
                        });
    self->field_rectangle_22.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.283062097e9)));
    self->field_text_23.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.289377709e9)));
    self->field_text_23.font_size.set(11);
    self->field_text_23.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_23.height.set(66);
    self->field_text_23.text.set(slint::SharedString(u8"PROCESSOR SIMULATOR"));
    self->field_text_23.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_23.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_18_layout_cache.get()[7];
                        });
    self->field_rectangle_25.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.281680444e9)));
    self->field_rectangle_25.border_radius.set(4);
    self->field_text_26.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.29122674e9)));
    self->field_text_26.font_size.set(10);
    self->field_text_26.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_26.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(self->field_root_15_text_26_preferred_height.get(), self->field_root_15_text_26_min_height.get());
                        });
    self->field_text_26.horizontal_alignment.set(slint::cbindgen_private::TextHorizontalAlignment::Center);
    self->field_text_26.text.set(slint::SharedString(u8"\U000025cf  PREVIEW"));
    self->field_text_26.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_26.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(self->field_root_15_text_26_preferred_width.get(), self->field_root_15_text_26_min_width.get());
                        });
    self->field_text_27.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.286549124e9)));
    self->field_text_27.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_27.font_size.set(11);
    self->field_text_27.height.set(66);
    self->field_text_27.line_height_factor.set(1);
    self->field_text_27.text.set(slint::SharedString(u8"v0.1"));
    self->field_text_27.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_27.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_18_layout_cache.get()[13];
                        });
    self->field_rectangle_29.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.293388769e9)));
    self->field_text_31.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.287140746e9)));
    self->field_text_31.font_size.set(10);
    self->field_text_31.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_31.height.set(28);
    self->field_text_31.text.set(slint::SharedString(u8"WORKSPACE"));
    self->field_text_31.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_31.width.set(174);
    self->field_rectangle_32.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.292404934e9)));
    self->field_rectangle_32.border_radius.set(4);
    self->field_text_34.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.282210873e9)));
    self->field_text_34.font_size.set(16);
    self->field_text_34.height.set(40);
    self->field_text_34.text.set(slint::SharedString(u8"\U000025a6"));
    self->field_text_34.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_34.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_33_layout_cache.get()[1];
                        });
    self->field_text_35.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.280628524e9)));
    self->field_text_35.font_size.set(13);
    self->field_text_35.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_35.height.set(40);
    self->field_text_35.text.set(slint::SharedString(u8"Overview"));
    self->field_text_35.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_35.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_33_layout_cache.get()[3];
                        });
    self->field_rectangle_36.background.set(slint::Brush(slint::Color::from_argb_encoded(0)));
    self->field_text_38.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.286022778e9)));
    self->field_text_38.font_size.set(16);
    self->field_text_38.height.set(40);
    self->field_text_38.text.set(slint::SharedString(u8"\U00002261"));
    self->field_text_38.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_38.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_37_layout_cache.get()[1];
                        });
    self->field_text_39.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.284048989e9)));
    self->field_text_39.font_size.set(13);
    self->field_text_39.height.set(40);
    self->field_text_39.text.set(slint::SharedString(u8"Instruction trace"));
    self->field_text_39.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_39.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_37_layout_cache.get()[3];
                        });
    self->field_rectangle_40.background.set(slint::Brush(slint::Color::from_argb_encoded(0)));
    self->field_text_42.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.286022778e9)));
    self->field_text_42.font_size.set(16);
    self->field_text_42.height.set(40);
    self->field_text_42.text.set(slint::SharedString(u8"\U000025a4"));
    self->field_text_42.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_42.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_41_layout_cache.get()[1];
                        });
    self->field_text_43.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.284048989e9)));
    self->field_text_43.font_size.set(13);
    self->field_text_43.height.set(40);
    self->field_text_43.text.set(slint::SharedString(u8"Memory map"));
    self->field_text_43.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_43.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_41_layout_cache.get()[3];
                        });
    self->field_rectangle_44.background.set(slint::Brush(slint::Color::from_argb_encoded(0)));
    self->field_text_46.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.286022778e9)));
    self->field_text_46.font_size.set(16);
    self->field_text_46.height.set(40);
    self->field_text_46.text.set(slint::SharedString(u8"\U000025a5"));
    self->field_text_46.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_46.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_45_layout_cache.get()[1];
                        });
    self->field_text_47.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.284048989e9)));
    self->field_text_47.font_size.set(13);
    self->field_text_47.height.set(40);
    self->field_text_47.text.set(slint::SharedString(u8"Cache lab"));
    self->field_text_47.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_47.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_45_layout_cache.get()[3];
                        });
    self->field_rectangle_49.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.291942092e9)));
    self->field_text_50.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.287140746e9)));
    self->field_text_50.font_size.set(10);
    self->field_text_50.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_50.height.set(34);
    self->field_text_50.text.set(slint::SharedString(u8"ACTIVE WORKLOAD"));
    self->field_text_50.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_50.width.set(174);
    self->field_rectangle_51.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.294112238e9)));
    self->field_rectangle_51.border_color.set(slint::Brush(slint::Color::from_argb_encoded(+4.292271057e9)));
    self->field_rectangle_51.border_radius.set(4);
    self->field_rectangle_51.border_width.set(1);
    self->field_text_53.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.281153842e9)));
    self->field_text_53.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_53.font_size.set(11);
    self->field_text_53.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_53.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_52_layout_cache.get()[1];
                        });
    self->field_text_53.line_height_factor.set(1);
    self->field_text_53.text.set(slint::SharedString(u8"dot_product"));
    self->field_text_53.width.set(158);
    self->field_text_54.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.286285693e9)));
    self->field_text_54.font_size.set(10);
    self->field_text_54.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_52_layout_cache.get()[3];
                        });
    self->field_text_54.text.set(slint::SharedString(u8"1 task \U000000b7 1 core"));
    self->field_text_54.width.set(158);
    self->field_rectangle_55.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.294046443e9)));
    self->field_text_59.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.280298279e9)));
    self->field_text_59.font_family.set(slint::SharedString(u8"Bahnschrift"));
    self->field_text_59.font_size.set(25);
    self->field_text_59.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_59.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_58_layout_cache.get()[1];
                        });
    self->field_text_59.line_height_factor.set(1);
    self->field_text_59.text.set(slint::SharedString(u8"Simulation overview"));
    self->field_text_59.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_57_layout_cache.get()[1];
                        });
    self->field_text_60.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.286285693e9)));
    self->field_text_60.font_size.set(12);
    self->field_text_60.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_58_layout_cache.get()[3];
                        });
    self->field_text_60.text.set(slint::SharedString(u8"Runtime state \U000000b7 dot_product \U000000b7 core 0"));
    self->field_text_60.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_57_layout_cache.get()[1];
                        });
    self->field_button_62.field_root_3_clicked.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    (void)(self->callback_tracker_root_15_reset_requested.get()), self->field_root_15_reset_requested.call();
                });
    self->field_button_62.field_root_3_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(66, std::max<float>(32, self->field_button_62.field_root_3_i_layout_6_layoutinfo_v.get().min));
                        });
    self->field_button_62.field_root_3_text.set(slint::SharedString(u8"\U000021ba  Reset"));
    self->field_button_62.field_root_3_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_57_layout_cache.get()[5];
                        });
    self->field_button_62.field_root_3_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_57_layout_cache.get()[4];
                        });
    self->field_button_63.field_root_3_clicked.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    (void)(self->callback_tracker_root_15_step_requested.get()), self->field_root_15_step_requested.call();
                });
    self->field_button_63.field_root_3_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(66, std::max<float>(32, self->field_button_63.field_root_3_i_layout_6_layoutinfo_v.get().min));
                        });
    self->field_button_63.field_root_3_text.set(slint::SharedString(u8"Step  \U00002192"));
    self->field_button_63.field_root_3_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_57_layout_cache.get()[7];
                        });
    self->field_button_63.field_root_3_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_57_layout_cache.get()[6];
                        });
    self->field_button_64.field_root_3_clicked.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    (void)(self->callback_tracker_root_15_run_requested.get()), self->field_root_15_run_requested.call();
                });
    self->field_button_64.field_root_3_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(66, std::max<float>(32, self->field_button_64.field_root_3_i_layout_6_layoutinfo_v.get().min));
                        });
    self->field_button_64.field_root_3_text.set(slint::SharedString(u8"\U000025b6  Run 10"));
    self->field_button_64.field_root_3_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_57_layout_cache.get()[9];
                        });
    self->field_button_64.field_root_3_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_57_layout_cache.get()[8];
                        });
    self->field_rectangle_66.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.294967295e9)));
    self->field_rectangle_66.border_color.set(slint::Brush(slint::Color::from_argb_encoded(+4.292928474e9)));
    self->field_rectangle_66.border_radius.set(5);
    self->field_rectangle_66.border_width.set(1);
    self->field_text_68.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.286417279e9)));
    self->field_text_68.font_size.set(10);
    self->field_text_68.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_68.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_67_layout_cache.get()[1];
                        });
    self->field_text_68.text.set(slint::SharedString(u8"SIMULATOR CYCLES"));
    self->field_text_68.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_65_layout_cache.get()[1] -(float) 13) -(float) 13);
                        });
    self->field_text_69.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.280298279e9)));
    self->field_text_69.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_69.font_size.set(22);
    self->field_text_69.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_69.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_67_layout_cache.get()[3];
                        });
    self->field_text_69.line_height_factor.set(1);
    self->field_text_69.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::SharedString::from_number(self->field_root_15_cycle_count.get());
                        });
    self->field_text_69.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_65_layout_cache.get()[1] -(float) 13) -(float) 13);
                        });
    self->field_rectangle_70.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.294967295e9)));
    self->field_rectangle_70.border_color.set(slint::Brush(slint::Color::from_argb_encoded(+4.292928474e9)));
    self->field_rectangle_70.border_radius.set(5);
    self->field_rectangle_70.border_width.set(1);
    self->field_text_72.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.286417279e9)));
    self->field_text_72.font_size.set(10);
    self->field_text_72.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_72.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_71_layout_cache.get()[1];
                        });
    self->field_text_72.text.set(slint::SharedString(u8"INSTRUCTIONS"));
    self->field_text_72.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_65_layout_cache.get()[3] -(float) 13) -(float) 13);
                        });
    self->field_text_73.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.280298279e9)));
    self->field_text_73.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_73.font_size.set(22);
    self->field_text_73.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_73.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_71_layout_cache.get()[3];
                        });
    self->field_text_73.line_height_factor.set(1);
    self->field_text_73.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::SharedString::from_number(self->field_root_15_executed_count.get());
                        });
    self->field_text_73.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_65_layout_cache.get()[3] -(float) 13) -(float) 13);
                        });
    self->field_rectangle_74.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.294967295e9)));
    self->field_rectangle_74.border_color.set(slint::Brush(slint::Color::from_argb_encoded(+4.292928474e9)));
    self->field_rectangle_74.border_radius.set(5);
    self->field_rectangle_74.border_width.set(1);
    self->field_text_76.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.286417279e9)));
    self->field_text_76.font_size.set(10);
    self->field_text_76.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_76.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_75_layout_cache.get()[1];
                        });
    self->field_text_76.text.set(slint::SharedString(u8"ACTIVE CORES"));
    self->field_text_76.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_65_layout_cache.get()[5] -(float) 13) -(float) 13);
                        });
    self->field_text_78.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.280298279e9)));
    self->field_text_78.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_78.font_size.set(22);
    self->field_text_78.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_78.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_75_layout_cache.get()[3];
                        });
    self->field_text_78.line_height_factor.set(1);
    self->field_text_78.text.set(slint::SharedString(u8"1"));
    self->field_text_78.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_77_layout_cache.get()[1];
                        });
    self->field_text_79.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.287206283e9)));
    self->field_text_79.font_size.set(12);
    self->field_text_79.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_75_layout_cache.get()[3];
                        });
    self->field_text_79.text.set(slint::SharedString(u8"of 1"));
    self->field_text_79.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Bottom);
    self->field_text_79.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_77_layout_cache.get()[3];
                        });
    self->field_rectangle_80.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.294967295e9)));
    self->field_rectangle_80.border_color.set(slint::Brush(slint::Color::from_argb_encoded(+4.292928474e9)));
    self->field_rectangle_80.border_radius.set(5);
    self->field_rectangle_80.border_width.set(1);
    self->field_text_82.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.286417279e9)));
    self->field_text_82.font_size.set(10);
    self->field_text_82.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_82.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_81_layout_cache.get()[1];
                        });
    self->field_text_82.text.set(slint::SharedString(u8"TASK STATUS"));
    self->field_text_82.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_65_layout_cache.get()[7] -(float) 13) -(float) 13);
                        });
    self->field_text_83.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.283595576e9)));
    self->field_text_83.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_83.font_size.set(17);
    self->field_text_83.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_83.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_81_layout_cache.get()[3];
                        });
    self->field_text_83.line_height_factor.set(1);
    self->field_text_83.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_task_status.get();
                        });
    self->field_text_83.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_65_layout_cache.get()[7] -(float) 13) -(float) 13);
                        });
    self->field_rectangle_85.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.294967295e9)));
    self->field_rectangle_85.border_color.set(slint::Brush(slint::Color::from_argb_encoded(+4.292928474e9)));
    self->field_rectangle_85.border_radius.set(5);
    self->field_rectangle_85.border_width.set(1);
    self->field_text_88.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.284048989e9)));
    self->field_text_88.font_size.set(10);
    self->field_text_88.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_88.height.set(30);
    self->field_text_88.text.set(slint::SharedString(u8"INSTRUCTION TRACE"));
    self->field_text_88.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_88.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_87_layout_cache.get()[1];
                        });
    self->field_text_90.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.288324507e9)));
    self->field_text_90.font_size.set(10);
    self->field_text_90.height.set(30);
    self->field_text_90.text.set(slint::SharedString(u8"15 instructions"));
    self->field_text_90.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_90.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_87_layout_cache.get()[5];
                        });
    self->field_rectangle_91.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.29338877e9)));
    self->field_text_93.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.287798163e9)));
    self->field_text_93.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_93.font_size.set(10);
    self->field_text_93.height.set(26);
    self->field_text_93.line_height_factor.set(1);
    self->field_text_93.text.set(slint::SharedString(u8"PC"));
    self->field_text_93.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_93.width.set(52);
    self->field_text_94.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.287798163e9)));
    self->field_text_94.font_size.set(10);
    self->field_text_94.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_94.height.set(26);
    self->field_text_94.text.set(slint::SharedString(u8"INSTRUCTION"));
    self->field_text_94.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_94.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_92_layout_cache.get()[3];
                        });
    self->field_text_95.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.287798163e9)));
    self->field_text_95.font_size.set(10);
    self->field_text_95.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_95.height.set(26);
    self->field_text_95.text.set(slint::SharedString(u8"OPERATION"));
    self->field_text_95.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_95.width.set(84);
    self->field_rectangle_97.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.29122674e9)));
    self->field_text_98.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.282406459e9)));
    self->field_text_98.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_98.font_size.set(11);
    self->field_text_98.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_98.height.set(30);
    self->field_text_98.horizontal_alignment.set(slint::cbindgen_private::TextHorizontalAlignment::Center);
    self->field_text_98.line_height_factor.set(1);
    self->field_text_98.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::SharedString::from_number(self->field_root_15_pc_value.get());
                        });
    self->field_text_98.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_98.width.set(49);
    self->field_text_99.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.280693804e9)));
    self->field_text_99.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_99.font_size.set(11);
    self->field_text_99.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_99.height.set(30);
    self->field_text_99.line_height_factor.set(1);
    self->field_text_99.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_current_instruction.get();
                        });
    self->field_text_99.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_99.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_96_layout_cache.get()[5];
                        });
    self->field_text_100.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.287469455e9)));
    self->field_text_100.font_size.set(10);
    self->field_text_100.height.set(30);
    self->field_text_100.text.set(slint::SharedString(u8"multiply"));
    self->field_text_100.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_100.width.set(84);
    self->field_text_102.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.288324507e9)));
    self->field_text_102.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_102.font_size.set(11);
    self->field_text_102.height.set(28);
    self->field_text_102.horizontal_alignment.set(slint::cbindgen_private::TextHorizontalAlignment::Center);
    self->field_text_102.line_height_factor.set(1);
    self->field_text_102.text.set(slint::SharedString(u8"06"));
    self->field_text_102.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_102.width.set(52);
    self->field_text_103.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.28510142e9)));
    self->field_text_103.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_103.font_size.set(11);
    self->field_text_103.height.set(28);
    self->field_text_103.line_height_factor.set(1);
    self->field_text_103.text.set(slint::SharedString(u8"ADD  R3, R3, R4"));
    self->field_text_103.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_103.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_101_layout_cache.get()[3];
                        });
    self->field_text_104.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.288324507e9)));
    self->field_text_104.font_size.set(10);
    self->field_text_104.height.set(28);
    self->field_text_104.text.set(slint::SharedString(u8"addition"));
    self->field_text_104.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_104.width.set(84);
    self->field_text_106.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.288324507e9)));
    self->field_text_106.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_106.font_size.set(11);
    self->field_text_106.height.set(28);
    self->field_text_106.horizontal_alignment.set(slint::cbindgen_private::TextHorizontalAlignment::Center);
    self->field_text_106.line_height_factor.set(1);
    self->field_text_106.text.set(slint::SharedString(u8"07"));
    self->field_text_106.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_106.width.set(52);
    self->field_text_107.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.28510142e9)));
    self->field_text_107.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_107.font_size.set(11);
    self->field_text_107.height.set(28);
    self->field_text_107.line_height_factor.set(1);
    self->field_text_107.text.set(slint::SharedString(u8"ADD  R0, R0, R7"));
    self->field_text_107.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_107.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_105_layout_cache.get()[3];
                        });
    self->field_text_108.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.288324507e9)));
    self->field_text_108.font_size.set(10);
    self->field_text_108.height.set(28);
    self->field_text_108.text.set(slint::SharedString(u8"addition"));
    self->field_text_108.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_108.width.set(84);
    self->field_text_110.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.288324507e9)));
    self->field_text_110.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_110.font_size.set(11);
    self->field_text_110.height.set(28);
    self->field_text_110.horizontal_alignment.set(slint::cbindgen_private::TextHorizontalAlignment::Center);
    self->field_text_110.line_height_factor.set(1);
    self->field_text_110.text.set(slint::SharedString(u8"08"));
    self->field_text_110.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_110.width.set(52);
    self->field_text_111.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.28510142e9)));
    self->field_text_111.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_111.font_size.set(11);
    self->field_text_111.height.set(28);
    self->field_text_111.line_height_factor.set(1);
    self->field_text_111.text.set(slint::SharedString(u8"ADD  R1, R1, R7"));
    self->field_text_111.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_111.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_109_layout_cache.get()[3];
                        });
    self->field_text_112.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.288324507e9)));
    self->field_text_112.font_size.set(10);
    self->field_text_112.height.set(28);
    self->field_text_112.text.set(slint::SharedString(u8"addition"));
    self->field_text_112.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_112.width.set(84);
    self->field_text_114.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.288324507e9)));
    self->field_text_114.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_114.font_size.set(11);
    self->field_text_114.height.set(28);
    self->field_text_114.horizontal_alignment.set(slint::cbindgen_private::TextHorizontalAlignment::Center);
    self->field_text_114.line_height_factor.set(1);
    self->field_text_114.text.set(slint::SharedString(u8"09"));
    self->field_text_114.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_114.width.set(52);
    self->field_text_115.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.28510142e9)));
    self->field_text_115.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_115.font_size.set(11);
    self->field_text_115.height.set(28);
    self->field_text_115.line_height_factor.set(1);
    self->field_text_115.text.set(slint::SharedString(u8"ADD  R2, R2, R7"));
    self->field_text_115.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_115.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_113_layout_cache.get()[3];
                        });
    self->field_text_116.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.288324507e9)));
    self->field_text_116.font_size.set(10);
    self->field_text_116.height.set(28);
    self->field_text_116.text.set(slint::SharedString(u8"addition"));
    self->field_text_116.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_116.width.set(84);
    self->field_text_118.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.288324507e9)));
    self->field_text_118.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_118.font_size.set(11);
    self->field_text_118.height.set(28);
    self->field_text_118.horizontal_alignment.set(slint::cbindgen_private::TextHorizontalAlignment::Center);
    self->field_text_118.line_height_factor.set(1);
    self->field_text_118.text.set(slint::SharedString(u8"10"));
    self->field_text_118.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_118.width.set(52);
    self->field_text_119.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.28510142e9)));
    self->field_text_119.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_119.font_size.set(11);
    self->field_text_119.height.set(28);
    self->field_text_119.line_height_factor.set(1);
    self->field_text_119.text.set(slint::SharedString(u8"CMP  R2, R6"));
    self->field_text_119.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_119.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_117_layout_cache.get()[3];
                        });
    self->field_text_120.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.288324507e9)));
    self->field_text_120.font_size.set(10);
    self->field_text_120.height.set(28);
    self->field_text_120.text.set(slint::SharedString(u8"compare"));
    self->field_text_120.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_120.width.set(84);
    self->field_text_122.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.288324507e9)));
    self->field_text_122.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_122.font_size.set(11);
    self->field_text_122.height.set(28);
    self->field_text_122.horizontal_alignment.set(slint::cbindgen_private::TextHorizontalAlignment::Center);
    self->field_text_122.line_height_factor.set(1);
    self->field_text_122.text.set(slint::SharedString(u8"11"));
    self->field_text_122.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_122.width.set(52);
    self->field_text_123.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.28510142e9)));
    self->field_text_123.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_123.font_size.set(11);
    self->field_text_123.height.set(28);
    self->field_text_123.line_height_factor.set(1);
    self->field_text_123.text.set(slint::SharedString(u8"JIF  00, LESS"));
    self->field_text_123.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_123.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_121_layout_cache.get()[3];
                        });
    self->field_text_124.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.288324507e9)));
    self->field_text_124.font_size.set(10);
    self->field_text_124.height.set(28);
    self->field_text_124.text.set(slint::SharedString(u8"branch"));
    self->field_text_124.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_124.width.set(84);
    self->field_rectangle_127.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.288333917e9)));
    self->field_rectangle_127.border_radius.set(4);
    self->field_text_128.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.286483072e9)));
    self->field_text_128.font_size.set(9);
    self->field_text_128.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_128.height.set(24);
    self->field_text_128.text.set(slint::SharedString(u8"CURRENT INSTRUCTION"));
    self->field_text_128.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_128.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_126_layout_cache.get()[3];
                        });
    self->field_text_130.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.286483072e9)));
    self->field_text_130.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_130.font_size.set(9);
    self->field_text_130.height.set(24);
    self->field_text_130.line_height_factor.set(1);
    self->field_text_130.text.set(slint::SharedString(u8"NEXT: ADD R3, R3, R4"));
    self->field_text_130.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_130.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_126_layout_cache.get()[7];
                        });
    self->field_rectangle_131.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.294967295e9)));
    self->field_rectangle_131.border_color.set(slint::Brush(slint::Color::from_argb_encoded(+4.292928474e9)));
    self->field_rectangle_131.border_radius.set(5);
    self->field_rectangle_131.border_width.set(1);
    self->field_text_134.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.280693804e9)));
    self->field_text_134.font_family.set(slint::SharedString(u8"Bahnschrift"));
    self->field_text_134.font_size.set(15);
    self->field_text_134.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_134.height.set(30);
    self->field_text_134.line_height_factor.set(1);
    self->field_text_134.text.set(slint::SharedString(u8"CORE 0"));
    self->field_text_134.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_134.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_133_layout_cache.get()[1];
                        });
    self->field_text_136.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.284320323e9)));
    self->field_text_136.font_size.set(9);
    self->field_text_136.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_136.height.set(30);
    self->field_text_136.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (slint::SharedString(u8"\U000025cf  ") + self->field_root_15_task_status.get());
                        });
    self->field_text_136.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_136.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_133_layout_cache.get()[5];
                        });
    self->field_rectangle_137.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.29338877e9)));
    self->field_rectangle_139.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.294178287e9)));
    self->field_rectangle_139.border_radius.set(3);
    self->field_text_141.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.287206282e9)));
    self->field_text_141.font_size.set(8);
    self->field_text_141.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_141.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_140_layout_cache.get()[1];
                        });
    self->field_text_141.text.set(slint::SharedString(u8"PROGRAM COUNTER"));
    self->field_text_141.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_138_layout_cache.get()[1] -(float) 6) -(float) 6);
                        });
    self->field_text_142.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.280693804e9)));
    self->field_text_142.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_142.font_size.set(13);
    self->field_text_142.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_142.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_140_layout_cache.get()[3];
                        });
    self->field_text_142.line_height_factor.set(1);
    self->field_text_142.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::SharedString::from_number(self->field_root_15_pc_value.get());
                        });
    self->field_text_142.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_138_layout_cache.get()[1] -(float) 6) -(float) 6);
                        });
    self->field_rectangle_144.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.294178287e9)));
    self->field_rectangle_144.border_radius.set(3);
    self->field_text_146.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.287206282e9)));
    self->field_text_146.font_size.set(8);
    self->field_text_146.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_146.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_145_layout_cache.get()[1];
                        });
    self->field_text_146.text.set(slint::SharedString(u8"COMPARE FLAG"));
    self->field_text_146.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_138_layout_cache.get()[5] -(float) 6) -(float) 6);
                        });
    self->field_text_147.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.289748291e9)));
    self->field_text_147.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_147.font_size.set(13);
    self->field_text_147.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_147.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_145_layout_cache.get()[3];
                        });
    self->field_text_147.line_height_factor.set(1);
    self->field_text_147.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_compare_flag.get();
                        });
    self->field_text_147.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_138_layout_cache.get()[5] -(float) 6) -(float) 6);
                        });
    self->field_text_148.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.286417279e9)));
    self->field_text_148.font_size.set(9);
    self->field_text_148.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_148.height.set(18);
    self->field_text_148.text.set(slint::SharedString(u8"REGISTERS"));
    self->field_text_148.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_148.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_84_layout_cache.get()[3] -(float) 16) -(float) 16);
                        });
    self->field_rectangle_150.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.293783784e9)));
    self->field_rectangle_150.border_radius.set(3);
    self->field_text_151.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.283851866e9)));
    self->field_text_151.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_151.font_size.set(10);
    self->field_text_151.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_151.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(self->field_root_15_text_151_preferred_height.get(), self->field_root_15_text_151_min_height.get());
                        });
    self->field_text_151.horizontal_alignment.set(slint::cbindgen_private::TextHorizontalAlignment::Center);
    self->field_text_151.line_height_factor.set(1);
    self->field_text_151.text.set(slint::SharedString(u8"R0"));
    self->field_text_151.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_151.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(self->field_root_15_text_151_preferred_width.get(), self->field_root_15_text_151_min_width.get());
                        });
    self->field_text_153.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.280693804e9)));
    self->field_text_153.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_153.font_size.set(11);
    self->field_text_153.height.set(31);
    self->field_text_153.line_height_factor.set(1);
    self->field_text_153.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::SharedString::from_number(self->field_root_15_reg0.get());
                        });
    self->field_text_153.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_153.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_149_layout_cache.get()[5];
                        });
    self->field_text_154.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.2883903e9)));
    self->field_text_154.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_154.font_size.set(9);
    self->field_text_154.height.set(31);
    self->field_text_154.line_height_factor.set(1);
    self->field_text_154.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_reg0_hex.get();
                        });
    self->field_text_154.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_154.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_149_layout_cache.get()[7];
                        });
    self->field_rectangle_156.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.293783784e9)));
    self->field_rectangle_156.border_radius.set(3);
    self->field_text_157.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.283851866e9)));
    self->field_text_157.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_157.font_size.set(10);
    self->field_text_157.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_157.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(self->field_root_15_text_157_preferred_height.get(), self->field_root_15_text_157_min_height.get());
                        });
    self->field_text_157.horizontal_alignment.set(slint::cbindgen_private::TextHorizontalAlignment::Center);
    self->field_text_157.line_height_factor.set(1);
    self->field_text_157.text.set(slint::SharedString(u8"R1"));
    self->field_text_157.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_157.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(self->field_root_15_text_157_preferred_width.get(), self->field_root_15_text_157_min_width.get());
                        });
    self->field_text_159.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.280693804e9)));
    self->field_text_159.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_159.font_size.set(11);
    self->field_text_159.height.set(31);
    self->field_text_159.line_height_factor.set(1);
    self->field_text_159.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::SharedString::from_number(self->field_root_15_reg1.get());
                        });
    self->field_text_159.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_159.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_155_layout_cache.get()[5];
                        });
    self->field_text_160.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.2883903e9)));
    self->field_text_160.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_160.font_size.set(9);
    self->field_text_160.height.set(31);
    self->field_text_160.line_height_factor.set(1);
    self->field_text_160.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_reg1_hex.get();
                        });
    self->field_text_160.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_160.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_155_layout_cache.get()[7];
                        });
    self->field_rectangle_162.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.293783784e9)));
    self->field_rectangle_162.border_radius.set(3);
    self->field_text_163.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.283851866e9)));
    self->field_text_163.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_163.font_size.set(10);
    self->field_text_163.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_163.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(self->field_root_15_text_163_preferred_height.get(), self->field_root_15_text_163_min_height.get());
                        });
    self->field_text_163.horizontal_alignment.set(slint::cbindgen_private::TextHorizontalAlignment::Center);
    self->field_text_163.line_height_factor.set(1);
    self->field_text_163.text.set(slint::SharedString(u8"R2"));
    self->field_text_163.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_163.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(self->field_root_15_text_163_preferred_width.get(), self->field_root_15_text_163_min_width.get());
                        });
    self->field_text_165.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.280693804e9)));
    self->field_text_165.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_165.font_size.set(11);
    self->field_text_165.height.set(31);
    self->field_text_165.line_height_factor.set(1);
    self->field_text_165.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::SharedString::from_number(self->field_root_15_reg2.get());
                        });
    self->field_text_165.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_165.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_161_layout_cache.get()[5];
                        });
    self->field_text_166.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.2883903e9)));
    self->field_text_166.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_166.font_size.set(9);
    self->field_text_166.height.set(31);
    self->field_text_166.line_height_factor.set(1);
    self->field_text_166.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_reg2_hex.get();
                        });
    self->field_text_166.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_166.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_161_layout_cache.get()[7];
                        });
    self->field_rectangle_168.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.293783784e9)));
    self->field_rectangle_168.border_radius.set(3);
    self->field_text_169.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.283851866e9)));
    self->field_text_169.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_169.font_size.set(10);
    self->field_text_169.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_169.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(self->field_root_15_text_169_preferred_height.get(), self->field_root_15_text_169_min_height.get());
                        });
    self->field_text_169.horizontal_alignment.set(slint::cbindgen_private::TextHorizontalAlignment::Center);
    self->field_text_169.line_height_factor.set(1);
    self->field_text_169.text.set(slint::SharedString(u8"R3"));
    self->field_text_169.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_169.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(self->field_root_15_text_169_preferred_width.get(), self->field_root_15_text_169_min_width.get());
                        });
    self->field_text_171.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.280693804e9)));
    self->field_text_171.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_171.font_size.set(11);
    self->field_text_171.height.set(31);
    self->field_text_171.line_height_factor.set(1);
    self->field_text_171.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::SharedString::from_number(self->field_root_15_reg3.get());
                        });
    self->field_text_171.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_171.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_167_layout_cache.get()[5];
                        });
    self->field_text_172.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.2883903e9)));
    self->field_text_172.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_172.font_size.set(9);
    self->field_text_172.height.set(31);
    self->field_text_172.line_height_factor.set(1);
    self->field_text_172.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_reg3_hex.get();
                        });
    self->field_text_172.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_172.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_167_layout_cache.get()[7];
                        });
    self->field_rectangle_174.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.294967295e9)));
    self->field_rectangle_174.border_color.set(slint::Brush(slint::Color::from_argb_encoded(+4.292928474e9)));
    self->field_rectangle_174.border_radius.set(5);
    self->field_rectangle_174.border_width.set(1);
    self->field_text_177.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.284048989e9)));
    self->field_text_177.font_size.set(10);
    self->field_text_177.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_177.height.set(28);
    self->field_text_177.text.set(slint::SharedString(u8"MEMORY WINDOW"));
    self->field_text_177.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_177.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_176_layout_cache.get()[1];
                        });
    self->field_text_179.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.287798163e9)));
    self->field_text_179.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_179.font_size.set(9);
    self->field_text_179.height.set(28);
    self->field_text_179.line_height_factor.set(1);
    self->field_text_179.text.set(slint::SharedString(u8"ADDRESS  0x0064 \U00002014 0x006B"));
    self->field_text_179.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_179.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_176_layout_cache.get()[5];
                        });
    self->field_rectangle_181.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.294244081e9)));
    self->field_rectangle_181.border_radius.set(3);
    self->field_text_183.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.287338125e9)));
    self->field_text_183.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_183.font_size.set(9);
    self->field_text_183.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_182_layout_cache.get()[1];
                        });
    self->field_text_183.line_height_factor.set(1);
    self->field_text_183.text.set(slint::SharedString(u8"0064"));
    self->field_text_183.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_180_layout_cache.get()[1] -(float) 8) -(float) 8);
                        });
    self->field_text_184.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.281614649e9)));
    self->field_text_184.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_184.font_size.set(13);
    self->field_text_184.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_184.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_182_layout_cache.get()[3];
                        });
    self->field_text_184.line_height_factor.set(1);
    self->field_text_184.text.set(slint::SharedString(u8"1"));
    self->field_text_184.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_180_layout_cache.get()[1] -(float) 8) -(float) 8);
                        });
    self->field_rectangle_185.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.294244081e9)));
    self->field_rectangle_185.border_radius.set(3);
    self->field_text_187.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.287338125e9)));
    self->field_text_187.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_187.font_size.set(9);
    self->field_text_187.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_186_layout_cache.get()[1];
                        });
    self->field_text_187.line_height_factor.set(1);
    self->field_text_187.text.set(slint::SharedString(u8"0065"));
    self->field_text_187.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_180_layout_cache.get()[3] -(float) 8) -(float) 8);
                        });
    self->field_text_188.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.281614649e9)));
    self->field_text_188.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_188.font_size.set(13);
    self->field_text_188.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_188.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_186_layout_cache.get()[3];
                        });
    self->field_text_188.line_height_factor.set(1);
    self->field_text_188.text.set(slint::SharedString(u8"2"));
    self->field_text_188.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_180_layout_cache.get()[3] -(float) 8) -(float) 8);
                        });
    self->field_rectangle_189.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.294244081e9)));
    self->field_rectangle_189.border_radius.set(3);
    self->field_text_191.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.287338125e9)));
    self->field_text_191.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_191.font_size.set(9);
    self->field_text_191.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_190_layout_cache.get()[1];
                        });
    self->field_text_191.line_height_factor.set(1);
    self->field_text_191.text.set(slint::SharedString(u8"0066"));
    self->field_text_191.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_180_layout_cache.get()[5] -(float) 8) -(float) 8);
                        });
    self->field_text_192.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.281614649e9)));
    self->field_text_192.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_192.font_size.set(13);
    self->field_text_192.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_192.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_190_layout_cache.get()[3];
                        });
    self->field_text_192.line_height_factor.set(1);
    self->field_text_192.text.set(slint::SharedString(u8"3"));
    self->field_text_192.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_180_layout_cache.get()[5] -(float) 8) -(float) 8);
                        });
    self->field_rectangle_193.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.294244081e9)));
    self->field_rectangle_193.border_radius.set(3);
    self->field_text_195.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.287338125e9)));
    self->field_text_195.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_195.font_size.set(9);
    self->field_text_195.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_194_layout_cache.get()[1];
                        });
    self->field_text_195.line_height_factor.set(1);
    self->field_text_195.text.set(slint::SharedString(u8"0067"));
    self->field_text_195.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_180_layout_cache.get()[7] -(float) 8) -(float) 8);
                        });
    self->field_text_196.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.281614649e9)));
    self->field_text_196.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_196.font_size.set(13);
    self->field_text_196.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_196.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_194_layout_cache.get()[3];
                        });
    self->field_text_196.line_height_factor.set(1);
    self->field_text_196.text.set(slint::SharedString(u8"4"));
    self->field_text_196.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_180_layout_cache.get()[7] -(float) 8) -(float) 8);
                        });
    self->field_rectangle_197.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.293259224e9)));
    self->field_rectangle_197.border_color.set(slint::Brush(slint::Color::from_argb_encoded(+4.291223466e9)));
    self->field_rectangle_197.border_radius.set(3);
    self->field_rectangle_197.border_width.set(1);
    self->field_text_199.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.285038929e9)));
    self->field_text_199.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_199.font_size.set(9);
    self->field_text_199.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_198_layout_cache.get()[1];
                        });
    self->field_text_199.line_height_factor.set(1);
    self->field_text_199.text.set(slint::SharedString(u8"0068"));
    self->field_text_199.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_180_layout_cache.get()[9] -(float) 8) -(float) 8);
                        });
    self->field_text_200.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.282342705e9)));
    self->field_text_200.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_200.font_size.set(13);
    self->field_text_200.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_200.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_198_layout_cache.get()[3];
                        });
    self->field_text_200.line_height_factor.set(1);
    self->field_text_200.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::SharedString::from_number(self->field_root_15_memory_word_4.get());
                        });
    self->field_text_200.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_180_layout_cache.get()[9] -(float) 8) -(float) 8);
                        });
    self->field_rectangle_201.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.294244081e9)));
    self->field_rectangle_201.border_radius.set(3);
    self->field_text_203.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.287338125e9)));
    self->field_text_203.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_203.font_size.set(9);
    self->field_text_203.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_202_layout_cache.get()[1];
                        });
    self->field_text_203.line_height_factor.set(1);
    self->field_text_203.text.set(slint::SharedString(u8"0069"));
    self->field_text_203.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_180_layout_cache.get()[11] -(float) 8) -(float) 8);
                        });
    self->field_text_204.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.281614649e9)));
    self->field_text_204.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_204.font_size.set(13);
    self->field_text_204.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_204.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_202_layout_cache.get()[3];
                        });
    self->field_text_204.line_height_factor.set(1);
    self->field_text_204.text.set(slint::SharedString(u8"6"));
    self->field_text_204.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_180_layout_cache.get()[11] -(float) 8) -(float) 8);
                        });
    self->field_rectangle_205.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.294244081e9)));
    self->field_rectangle_205.border_radius.set(3);
    self->field_text_207.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.287338125e9)));
    self->field_text_207.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_207.font_size.set(9);
    self->field_text_207.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_206_layout_cache.get()[1];
                        });
    self->field_text_207.line_height_factor.set(1);
    self->field_text_207.text.set(slint::SharedString(u8"006A"));
    self->field_text_207.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_180_layout_cache.get()[13] -(float) 8) -(float) 8);
                        });
    self->field_text_208.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.281614649e9)));
    self->field_text_208.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_208.font_size.set(13);
    self->field_text_208.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_208.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_206_layout_cache.get()[3];
                        });
    self->field_text_208.line_height_factor.set(1);
    self->field_text_208.text.set(slint::SharedString(u8"7"));
    self->field_text_208.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_180_layout_cache.get()[13] -(float) 8) -(float) 8);
                        });
    self->field_rectangle_209.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.294244081e9)));
    self->field_rectangle_209.border_radius.set(3);
    self->field_text_211.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.287338125e9)));
    self->field_text_211.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_211.font_size.set(9);
    self->field_text_211.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_210_layout_cache.get()[1];
                        });
    self->field_text_211.line_height_factor.set(1);
    self->field_text_211.text.set(slint::SharedString(u8"006B"));
    self->field_text_211.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_180_layout_cache.get()[15] -(float) 8) -(float) 8);
                        });
    self->field_text_212.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.281614649e9)));
    self->field_text_212.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_212.font_size.set(13);
    self->field_text_212.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_212.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_210_layout_cache.get()[3];
                        });
    self->field_text_212.line_height_factor.set(1);
    self->field_text_212.text.set(slint::SharedString(u8"8"));
    self->field_text_212.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_180_layout_cache.get()[15] -(float) 8) -(float) 8);
                        });
    self->field_rectangle_213.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.294967295e9)));
    self->field_rectangle_213.border_color.set(slint::Brush(slint::Color::from_argb_encoded(+4.292928474e9)));
    self->field_rectangle_213.border_radius.set(5);
    self->field_rectangle_213.border_width.set(1);
    self->field_text_216.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.284048989e9)));
    self->field_text_216.font_size.set(10);
    self->field_text_216.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_216.height.set(28);
    self->field_text_216.text.set(slint::SharedString(u8"CACHE ACTIVITY"));
    self->field_text_216.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_216.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_215_layout_cache.get()[1];
                        });
    self->field_text_218.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.287798163e9)));
    self->field_text_218.font_size.set(9);
    self->field_text_218.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_218.height.set(28);
    self->field_text_218.text.set(slint::SharedString(u8"HIT RATE"));
    self->field_text_218.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_218.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_215_layout_cache.get()[5];
                        });
    self->field_text_219.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.283331643e9)));
    self->field_text_219.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_219.font_size.set(12);
    self->field_text_219.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_219.height.set(28);
    self->field_text_219.line_height_factor.set(1);
    self->field_text_219.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_l1_rate.get();
                        });
    self->field_text_219.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_219.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_215_layout_cache.get()[7];
                        });
    self->field_text_221.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.284048989e9)));
    self->field_text_221.font_size.set(10);
    self->field_text_221.height.set(22);
    self->field_text_221.text.set(slint::SharedString(u8"L1  \U000000b7  4-way"));
    self->field_text_221.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_221.width.set(82);
    self->field_rectangle_223.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.29345482e9)));
    self->field_rectangle_223.border_radius.set(4);
    self->field_rectangle_224.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.288399453e9)));
    self->field_rectangle_224.border_radius.set(4);
    self->field_text_225.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.284838761e9)));
    self->field_text_225.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_225.font_size.set(9);
    self->field_text_225.height.set(22);
    self->field_text_225.horizontal_alignment.set(slint::cbindgen_private::TextHorizontalAlignment::Right);
    self->field_text_225.line_height_factor.set(1);
    self->field_text_225.text.set(slint::SharedString(u8"72%"));
    self->field_text_225.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_225.width.set(34);
    self->field_text_227.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.284048989e9)));
    self->field_text_227.font_size.set(10);
    self->field_text_227.height.set(22);
    self->field_text_227.text.set(slint::SharedString(u8"L2  \U000000b7  8-way"));
    self->field_text_227.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_227.width.set(82);
    self->field_rectangle_229.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.29345482e9)));
    self->field_rectangle_229.border_radius.set(4);
    self->field_rectangle_230.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.293043054e9)));
    self->field_rectangle_230.border_radius.set(4);
    self->field_text_231.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.284838761e9)));
    self->field_text_231.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_231.font_size.set(9);
    self->field_text_231.height.set(22);
    self->field_text_231.horizontal_alignment.set(slint::cbindgen_private::TextHorizontalAlignment::Right);
    self->field_text_231.line_height_factor.set(1);
    self->field_text_231.text.set(slint::SharedString(u8"48%"));
    self->field_text_231.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_231.width.set(34);
    self->field_rectangle_234.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.294178287e9)));
    self->field_rectangle_234.border_radius.set(3);
    self->field_text_236.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.287206282e9)));
    self->field_text_236.font_size.set(8);
    self->field_text_236.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_236.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_235_layout_cache.get()[1];
                        });
    self->field_text_236.text.set(slint::SharedString(u8"HITS"));
    self->field_text_236.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_233_layout_cache.get()[1] -(float) 5) -(float) 5);
                        });
    self->field_text_237.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.282342705e9)));
    self->field_text_237.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_237.font_size.set(10);
    self->field_text_237.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_237.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_235_layout_cache.get()[3];
                        });
    self->field_text_237.line_height_factor.set(1);
    self->field_text_237.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::SharedString::from_number(self->field_root_15_l1_hits.get());
                        });
    self->field_text_237.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_233_layout_cache.get()[1] -(float) 5) -(float) 5);
                        });
    self->field_rectangle_239.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.294178287e9)));
    self->field_rectangle_239.border_radius.set(3);
    self->field_text_241.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.287206282e9)));
    self->field_text_241.font_size.set(8);
    self->field_text_241.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_241.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_240_layout_cache.get()[1];
                        });
    self->field_text_241.text.set(slint::SharedString(u8"MISSES"));
    self->field_text_241.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_233_layout_cache.get()[5] -(float) 5) -(float) 5);
                        });
    self->field_text_242.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.289554756e9)));
    self->field_text_242.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_242.font_size.set(10);
    self->field_text_242.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_242.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_240_layout_cache.get()[3];
                        });
    self->field_text_242.line_height_factor.set(1);
    self->field_text_242.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::SharedString::from_number(self->field_root_15_l1_misses.get());
                        });
    self->field_text_242.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_233_layout_cache.get()[5] -(float) 5) -(float) 5);
                        });
    self->field_rectangle_244.background.set(slint::Brush(slint::Color::from_argb_encoded(+4.294178287e9)));
    self->field_rectangle_244.border_radius.set(3);
    self->field_text_246.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.287206282e9)));
    self->field_text_246.font_size.set(8);
    self->field_text_246.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_246.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_245_layout_cache.get()[1];
                        });
    self->field_text_246.text.set(slint::SharedString(u8"EVICTIONS"));
    self->field_text_246.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_233_layout_cache.get()[9] -(float) 5) -(float) 5);
                        });
    self->field_text_247.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.284048989e9)));
    self->field_text_247.font_family.set(slint::SharedString(u8"Cascadia Code"));
    self->field_text_247.font_size.set(10);
    self->field_text_247.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_247.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_245_layout_cache.get()[3];
                        });
    self->field_text_247.line_height_factor.set(1);
    self->field_text_247.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::SharedString::from_number(self->field_root_15_l1_evictions.get());
                        });
    self->field_text_247.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_15_empty_233_layout_cache.get()[9] -(float) 5) -(float) 5);
                        });
    self->field_root_15.always_on_top.set_constant();
    self->field_root_15.background.set_constant();
    self->field_root_15.default_font_family.set_constant();
    self->field_root_15.default_font_size.set_constant();
    self->field_root_15.default_font_weight.set_constant();
    self->field_root_15.icon.set_constant();
    self->field_root_15.no_frame.set_constant();
    self->field_root_15.resize_border_width.set_constant();
    self->field_root_15.title.set_constant();
    self->field_rectangle_17.background.set_constant();
    self->field_rectangle_19.background.set_constant();
    self->field_rectangle_19.border_color.set_constant();
    self->field_rectangle_19.border_radius.set_constant();
    self->field_rectangle_19.border_width.set_constant();
    self->field_text_20.color.set_constant();
    self->field_text_20.font_family.set_constant();
    self->field_text_20.font_italic.set_constant();
    self->field_text_20.font_size.set_constant();
    self->field_text_20.font_weight.set_constant();
    self->field_text_20.horizontal_alignment.set_constant();
    self->field_text_20.letter_spacing.set_constant();
    self->field_text_20.line_height_factor.set_constant();
    self->field_text_20.max_lines.set_constant();
    self->field_text_20.overflow.set_constant();
    self->field_text_20.stroke.set_constant();
    self->field_text_20.stroke_style.set_constant();
    self->field_text_20.stroke_width.set_constant();
    self->field_text_20.text.set_constant();
    self->field_text_20.vertical_alignment.set_constant();
    self->field_text_20.wrap.set_constant();
    self->field_text_21.color.set_constant();
    self->field_text_21.font_family.set_constant();
    self->field_text_21.font_italic.set_constant();
    self->field_text_21.font_size.set_constant();
    self->field_text_21.font_weight.set_constant();
    self->field_text_21.height.set_constant();
    self->field_text_21.horizontal_alignment.set_constant();
    self->field_text_21.letter_spacing.set_constant();
    self->field_text_21.line_height_factor.set_constant();
    self->field_text_21.max_lines.set_constant();
    self->field_text_21.overflow.set_constant();
    self->field_text_21.stroke.set_constant();
    self->field_text_21.stroke_style.set_constant();
    self->field_text_21.stroke_width.set_constant();
    self->field_text_21.text.set_constant();
    self->field_text_21.vertical_alignment.set_constant();
    self->field_text_21.wrap.set_constant();
    self->field_rectangle_22.background.set_constant();
    self->field_text_23.color.set_constant();
    self->field_text_23.font_size.set_constant();
    self->field_text_23.font_weight.set_constant();
    self->field_text_23.height.set_constant();
    self->field_text_23.horizontal_alignment.set_constant();
    self->field_text_23.max_lines.set_constant();
    self->field_text_23.text.set_constant();
    self->field_text_23.vertical_alignment.set_constant();
    self->field_rectangle_25.background.set_constant();
    self->field_rectangle_25.border_color.set_constant();
    self->field_rectangle_25.border_radius.set_constant();
    self->field_rectangle_25.border_width.set_constant();
    self->field_text_26.color.set_constant();
    self->field_text_26.font_size.set_constant();
    self->field_text_26.font_weight.set_constant();
    self->field_text_26.horizontal_alignment.set_constant();
    self->field_text_26.max_lines.set_constant();
    self->field_text_26.text.set_constant();
    self->field_text_26.vertical_alignment.set_constant();
    self->field_text_27.color.set_constant();
    self->field_text_27.font_family.set_constant();
    self->field_text_27.font_italic.set_constant();
    self->field_text_27.font_size.set_constant();
    self->field_text_27.font_weight.set_constant();
    self->field_text_27.height.set_constant();
    self->field_text_27.horizontal_alignment.set_constant();
    self->field_text_27.letter_spacing.set_constant();
    self->field_text_27.line_height_factor.set_constant();
    self->field_text_27.max_lines.set_constant();
    self->field_text_27.overflow.set_constant();
    self->field_text_27.stroke.set_constant();
    self->field_text_27.stroke_style.set_constant();
    self->field_text_27.stroke_width.set_constant();
    self->field_text_27.text.set_constant();
    self->field_text_27.vertical_alignment.set_constant();
    self->field_text_27.wrap.set_constant();
    self->field_rectangle_29.background.set_constant();
    self->field_text_31.color.set_constant();
    self->field_text_31.font_size.set_constant();
    self->field_text_31.font_weight.set_constant();
    self->field_text_31.height.set_constant();
    self->field_text_31.horizontal_alignment.set_constant();
    self->field_text_31.max_lines.set_constant();
    self->field_text_31.text.set_constant();
    self->field_text_31.vertical_alignment.set_constant();
    self->field_text_31.width.set_constant();
    self->field_rectangle_32.background.set_constant();
    self->field_rectangle_32.border_color.set_constant();
    self->field_rectangle_32.border_radius.set_constant();
    self->field_rectangle_32.border_width.set_constant();
    self->field_text_34.color.set_constant();
    self->field_text_34.font_size.set_constant();
    self->field_text_34.font_weight.set_constant();
    self->field_text_34.height.set_constant();
    self->field_text_34.horizontal_alignment.set_constant();
    self->field_text_34.max_lines.set_constant();
    self->field_text_34.text.set_constant();
    self->field_text_34.vertical_alignment.set_constant();
    self->field_text_35.color.set_constant();
    self->field_text_35.font_size.set_constant();
    self->field_text_35.font_weight.set_constant();
    self->field_text_35.height.set_constant();
    self->field_text_35.horizontal_alignment.set_constant();
    self->field_text_35.max_lines.set_constant();
    self->field_text_35.text.set_constant();
    self->field_text_35.vertical_alignment.set_constant();
    self->field_rectangle_36.background.set_constant();
    self->field_text_38.color.set_constant();
    self->field_text_38.font_size.set_constant();
    self->field_text_38.font_weight.set_constant();
    self->field_text_38.height.set_constant();
    self->field_text_38.horizontal_alignment.set_constant();
    self->field_text_38.max_lines.set_constant();
    self->field_text_38.text.set_constant();
    self->field_text_38.vertical_alignment.set_constant();
    self->field_text_39.color.set_constant();
    self->field_text_39.font_size.set_constant();
    self->field_text_39.font_weight.set_constant();
    self->field_text_39.height.set_constant();
    self->field_text_39.horizontal_alignment.set_constant();
    self->field_text_39.max_lines.set_constant();
    self->field_text_39.text.set_constant();
    self->field_text_39.vertical_alignment.set_constant();
    self->field_rectangle_40.background.set_constant();
    self->field_text_42.color.set_constant();
    self->field_text_42.font_size.set_constant();
    self->field_text_42.font_weight.set_constant();
    self->field_text_42.height.set_constant();
    self->field_text_42.horizontal_alignment.set_constant();
    self->field_text_42.max_lines.set_constant();
    self->field_text_42.text.set_constant();
    self->field_text_42.vertical_alignment.set_constant();
    self->field_text_43.color.set_constant();
    self->field_text_43.font_size.set_constant();
    self->field_text_43.font_weight.set_constant();
    self->field_text_43.height.set_constant();
    self->field_text_43.horizontal_alignment.set_constant();
    self->field_text_43.max_lines.set_constant();
    self->field_text_43.text.set_constant();
    self->field_text_43.vertical_alignment.set_constant();
    self->field_rectangle_44.background.set_constant();
    self->field_text_46.color.set_constant();
    self->field_text_46.font_size.set_constant();
    self->field_text_46.font_weight.set_constant();
    self->field_text_46.height.set_constant();
    self->field_text_46.horizontal_alignment.set_constant();
    self->field_text_46.max_lines.set_constant();
    self->field_text_46.text.set_constant();
    self->field_text_46.vertical_alignment.set_constant();
    self->field_text_47.color.set_constant();
    self->field_text_47.font_size.set_constant();
    self->field_text_47.font_weight.set_constant();
    self->field_text_47.height.set_constant();
    self->field_text_47.horizontal_alignment.set_constant();
    self->field_text_47.max_lines.set_constant();
    self->field_text_47.text.set_constant();
    self->field_text_47.vertical_alignment.set_constant();
    self->field_rectangle_49.background.set_constant();
    self->field_text_50.color.set_constant();
    self->field_text_50.font_size.set_constant();
    self->field_text_50.font_weight.set_constant();
    self->field_text_50.height.set_constant();
    self->field_text_50.horizontal_alignment.set_constant();
    self->field_text_50.max_lines.set_constant();
    self->field_text_50.text.set_constant();
    self->field_text_50.vertical_alignment.set_constant();
    self->field_text_50.width.set_constant();
    self->field_rectangle_51.background.set_constant();
    self->field_rectangle_51.border_color.set_constant();
    self->field_rectangle_51.border_radius.set_constant();
    self->field_rectangle_51.border_width.set_constant();
    self->field_text_53.color.set_constant();
    self->field_text_53.font_family.set_constant();
    self->field_text_53.font_italic.set_constant();
    self->field_text_53.font_size.set_constant();
    self->field_text_53.font_weight.set_constant();
    self->field_text_53.horizontal_alignment.set_constant();
    self->field_text_53.letter_spacing.set_constant();
    self->field_text_53.line_height_factor.set_constant();
    self->field_text_53.max_lines.set_constant();
    self->field_text_53.overflow.set_constant();
    self->field_text_53.stroke.set_constant();
    self->field_text_53.stroke_style.set_constant();
    self->field_text_53.stroke_width.set_constant();
    self->field_text_53.text.set_constant();
    self->field_text_53.vertical_alignment.set_constant();
    self->field_text_53.width.set_constant();
    self->field_text_53.wrap.set_constant();
    self->field_text_54.color.set_constant();
    self->field_text_54.font_size.set_constant();
    self->field_text_54.font_weight.set_constant();
    self->field_text_54.horizontal_alignment.set_constant();
    self->field_text_54.max_lines.set_constant();
    self->field_text_54.text.set_constant();
    self->field_text_54.vertical_alignment.set_constant();
    self->field_text_54.width.set_constant();
    self->field_rectangle_55.background.set_constant();
    self->field_text_59.color.set_constant();
    self->field_text_59.font_family.set_constant();
    self->field_text_59.font_italic.set_constant();
    self->field_text_59.font_size.set_constant();
    self->field_text_59.font_weight.set_constant();
    self->field_text_59.horizontal_alignment.set_constant();
    self->field_text_59.letter_spacing.set_constant();
    self->field_text_59.line_height_factor.set_constant();
    self->field_text_59.max_lines.set_constant();
    self->field_text_59.overflow.set_constant();
    self->field_text_59.stroke.set_constant();
    self->field_text_59.stroke_style.set_constant();
    self->field_text_59.stroke_width.set_constant();
    self->field_text_59.text.set_constant();
    self->field_text_59.vertical_alignment.set_constant();
    self->field_text_59.wrap.set_constant();
    self->field_text_60.color.set_constant();
    self->field_text_60.font_size.set_constant();
    self->field_text_60.font_weight.set_constant();
    self->field_text_60.horizontal_alignment.set_constant();
    self->field_text_60.max_lines.set_constant();
    self->field_text_60.text.set_constant();
    self->field_text_60.vertical_alignment.set_constant();
    self->field_button_62.field_root_3_icon.set_constant();
    self->field_button_62.field_root_3_text.set_constant();
    self->field_button_63.field_root_3_icon.set_constant();
    self->field_button_63.field_root_3_text.set_constant();
    self->field_button_64.field_root_3_icon.set_constant();
    self->field_button_64.field_root_3_text.set_constant();
    self->field_rectangle_66.background.set_constant();
    self->field_rectangle_66.border_color.set_constant();
    self->field_rectangle_66.border_radius.set_constant();
    self->field_rectangle_66.border_width.set_constant();
    self->field_text_68.color.set_constant();
    self->field_text_68.font_size.set_constant();
    self->field_text_68.font_weight.set_constant();
    self->field_text_68.horizontal_alignment.set_constant();
    self->field_text_68.max_lines.set_constant();
    self->field_text_68.text.set_constant();
    self->field_text_68.vertical_alignment.set_constant();
    self->field_text_69.color.set_constant();
    self->field_text_69.font_family.set_constant();
    self->field_text_69.font_italic.set_constant();
    self->field_text_69.font_size.set_constant();
    self->field_text_69.font_weight.set_constant();
    self->field_text_69.horizontal_alignment.set_constant();
    self->field_text_69.letter_spacing.set_constant();
    self->field_text_69.line_height_factor.set_constant();
    self->field_text_69.max_lines.set_constant();
    self->field_text_69.overflow.set_constant();
    self->field_text_69.stroke.set_constant();
    self->field_text_69.stroke_style.set_constant();
    self->field_text_69.stroke_width.set_constant();
    self->field_text_69.vertical_alignment.set_constant();
    self->field_text_69.wrap.set_constant();
    self->field_rectangle_70.background.set_constant();
    self->field_rectangle_70.border_color.set_constant();
    self->field_rectangle_70.border_radius.set_constant();
    self->field_rectangle_70.border_width.set_constant();
    self->field_text_72.color.set_constant();
    self->field_text_72.font_size.set_constant();
    self->field_text_72.font_weight.set_constant();
    self->field_text_72.horizontal_alignment.set_constant();
    self->field_text_72.max_lines.set_constant();
    self->field_text_72.text.set_constant();
    self->field_text_72.vertical_alignment.set_constant();
    self->field_text_73.color.set_constant();
    self->field_text_73.font_family.set_constant();
    self->field_text_73.font_italic.set_constant();
    self->field_text_73.font_size.set_constant();
    self->field_text_73.font_weight.set_constant();
    self->field_text_73.horizontal_alignment.set_constant();
    self->field_text_73.letter_spacing.set_constant();
    self->field_text_73.line_height_factor.set_constant();
    self->field_text_73.max_lines.set_constant();
    self->field_text_73.overflow.set_constant();
    self->field_text_73.stroke.set_constant();
    self->field_text_73.stroke_style.set_constant();
    self->field_text_73.stroke_width.set_constant();
    self->field_text_73.vertical_alignment.set_constant();
    self->field_text_73.wrap.set_constant();
    self->field_rectangle_74.background.set_constant();
    self->field_rectangle_74.border_color.set_constant();
    self->field_rectangle_74.border_radius.set_constant();
    self->field_rectangle_74.border_width.set_constant();
    self->field_text_76.color.set_constant();
    self->field_text_76.font_size.set_constant();
    self->field_text_76.font_weight.set_constant();
    self->field_text_76.horizontal_alignment.set_constant();
    self->field_text_76.max_lines.set_constant();
    self->field_text_76.text.set_constant();
    self->field_text_76.vertical_alignment.set_constant();
    self->field_text_78.color.set_constant();
    self->field_text_78.font_family.set_constant();
    self->field_text_78.font_italic.set_constant();
    self->field_text_78.font_size.set_constant();
    self->field_text_78.font_weight.set_constant();
    self->field_text_78.horizontal_alignment.set_constant();
    self->field_text_78.letter_spacing.set_constant();
    self->field_text_78.line_height_factor.set_constant();
    self->field_text_78.max_lines.set_constant();
    self->field_text_78.overflow.set_constant();
    self->field_text_78.stroke.set_constant();
    self->field_text_78.stroke_style.set_constant();
    self->field_text_78.stroke_width.set_constant();
    self->field_text_78.text.set_constant();
    self->field_text_78.vertical_alignment.set_constant();
    self->field_text_78.wrap.set_constant();
    self->field_text_79.color.set_constant();
    self->field_text_79.font_size.set_constant();
    self->field_text_79.font_weight.set_constant();
    self->field_text_79.horizontal_alignment.set_constant();
    self->field_text_79.max_lines.set_constant();
    self->field_text_79.text.set_constant();
    self->field_text_79.vertical_alignment.set_constant();
    self->field_rectangle_80.background.set_constant();
    self->field_rectangle_80.border_color.set_constant();
    self->field_rectangle_80.border_radius.set_constant();
    self->field_rectangle_80.border_width.set_constant();
    self->field_text_82.color.set_constant();
    self->field_text_82.font_size.set_constant();
    self->field_text_82.font_weight.set_constant();
    self->field_text_82.horizontal_alignment.set_constant();
    self->field_text_82.max_lines.set_constant();
    self->field_text_82.text.set_constant();
    self->field_text_82.vertical_alignment.set_constant();
    self->field_text_83.color.set_constant();
    self->field_text_83.font_family.set_constant();
    self->field_text_83.font_italic.set_constant();
    self->field_text_83.font_size.set_constant();
    self->field_text_83.font_weight.set_constant();
    self->field_text_83.horizontal_alignment.set_constant();
    self->field_text_83.letter_spacing.set_constant();
    self->field_text_83.line_height_factor.set_constant();
    self->field_text_83.max_lines.set_constant();
    self->field_text_83.overflow.set_constant();
    self->field_text_83.stroke.set_constant();
    self->field_text_83.stroke_style.set_constant();
    self->field_text_83.stroke_width.set_constant();
    self->field_text_83.vertical_alignment.set_constant();
    self->field_text_83.wrap.set_constant();
    self->field_rectangle_85.background.set_constant();
    self->field_rectangle_85.border_color.set_constant();
    self->field_rectangle_85.border_radius.set_constant();
    self->field_rectangle_85.border_width.set_constant();
    self->field_text_88.color.set_constant();
    self->field_text_88.font_size.set_constant();
    self->field_text_88.font_weight.set_constant();
    self->field_text_88.height.set_constant();
    self->field_text_88.horizontal_alignment.set_constant();
    self->field_text_88.max_lines.set_constant();
    self->field_text_88.text.set_constant();
    self->field_text_88.vertical_alignment.set_constant();
    self->field_text_90.color.set_constant();
    self->field_text_90.font_size.set_constant();
    self->field_text_90.font_weight.set_constant();
    self->field_text_90.height.set_constant();
    self->field_text_90.horizontal_alignment.set_constant();
    self->field_text_90.max_lines.set_constant();
    self->field_text_90.text.set_constant();
    self->field_text_90.vertical_alignment.set_constant();
    self->field_rectangle_91.background.set_constant();
    self->field_text_93.color.set_constant();
    self->field_text_93.font_family.set_constant();
    self->field_text_93.font_italic.set_constant();
    self->field_text_93.font_size.set_constant();
    self->field_text_93.font_weight.set_constant();
    self->field_text_93.height.set_constant();
    self->field_text_93.horizontal_alignment.set_constant();
    self->field_text_93.letter_spacing.set_constant();
    self->field_text_93.line_height_factor.set_constant();
    self->field_text_93.max_lines.set_constant();
    self->field_text_93.overflow.set_constant();
    self->field_text_93.stroke.set_constant();
    self->field_text_93.stroke_style.set_constant();
    self->field_text_93.stroke_width.set_constant();
    self->field_text_93.text.set_constant();
    self->field_text_93.vertical_alignment.set_constant();
    self->field_text_93.width.set_constant();
    self->field_text_93.wrap.set_constant();
    self->field_text_94.color.set_constant();
    self->field_text_94.font_size.set_constant();
    self->field_text_94.font_weight.set_constant();
    self->field_text_94.height.set_constant();
    self->field_text_94.horizontal_alignment.set_constant();
    self->field_text_94.max_lines.set_constant();
    self->field_text_94.text.set_constant();
    self->field_text_94.vertical_alignment.set_constant();
    self->field_text_95.color.set_constant();
    self->field_text_95.font_size.set_constant();
    self->field_text_95.font_weight.set_constant();
    self->field_text_95.height.set_constant();
    self->field_text_95.horizontal_alignment.set_constant();
    self->field_text_95.max_lines.set_constant();
    self->field_text_95.text.set_constant();
    self->field_text_95.vertical_alignment.set_constant();
    self->field_text_95.width.set_constant();
    self->field_rectangle_97.background.set_constant();
    self->field_text_98.color.set_constant();
    self->field_text_98.font_family.set_constant();
    self->field_text_98.font_italic.set_constant();
    self->field_text_98.font_size.set_constant();
    self->field_text_98.font_weight.set_constant();
    self->field_text_98.height.set_constant();
    self->field_text_98.horizontal_alignment.set_constant();
    self->field_text_98.letter_spacing.set_constant();
    self->field_text_98.line_height_factor.set_constant();
    self->field_text_98.max_lines.set_constant();
    self->field_text_98.overflow.set_constant();
    self->field_text_98.stroke.set_constant();
    self->field_text_98.stroke_style.set_constant();
    self->field_text_98.stroke_width.set_constant();
    self->field_text_98.vertical_alignment.set_constant();
    self->field_text_98.width.set_constant();
    self->field_text_98.wrap.set_constant();
    self->field_text_99.color.set_constant();
    self->field_text_99.font_family.set_constant();
    self->field_text_99.font_italic.set_constant();
    self->field_text_99.font_size.set_constant();
    self->field_text_99.font_weight.set_constant();
    self->field_text_99.height.set_constant();
    self->field_text_99.horizontal_alignment.set_constant();
    self->field_text_99.letter_spacing.set_constant();
    self->field_text_99.line_height_factor.set_constant();
    self->field_text_99.max_lines.set_constant();
    self->field_text_99.overflow.set_constant();
    self->field_text_99.stroke.set_constant();
    self->field_text_99.stroke_style.set_constant();
    self->field_text_99.stroke_width.set_constant();
    self->field_text_99.vertical_alignment.set_constant();
    self->field_text_99.wrap.set_constant();
    self->field_text_100.color.set_constant();
    self->field_text_100.font_size.set_constant();
    self->field_text_100.font_weight.set_constant();
    self->field_text_100.height.set_constant();
    self->field_text_100.horizontal_alignment.set_constant();
    self->field_text_100.max_lines.set_constant();
    self->field_text_100.text.set_constant();
    self->field_text_100.vertical_alignment.set_constant();
    self->field_text_100.width.set_constant();
    self->field_text_102.color.set_constant();
    self->field_text_102.font_family.set_constant();
    self->field_text_102.font_italic.set_constant();
    self->field_text_102.font_size.set_constant();
    self->field_text_102.font_weight.set_constant();
    self->field_text_102.height.set_constant();
    self->field_text_102.horizontal_alignment.set_constant();
    self->field_text_102.letter_spacing.set_constant();
    self->field_text_102.line_height_factor.set_constant();
    self->field_text_102.max_lines.set_constant();
    self->field_text_102.overflow.set_constant();
    self->field_text_102.stroke.set_constant();
    self->field_text_102.stroke_style.set_constant();
    self->field_text_102.stroke_width.set_constant();
    self->field_text_102.text.set_constant();
    self->field_text_102.vertical_alignment.set_constant();
    self->field_text_102.width.set_constant();
    self->field_text_102.wrap.set_constant();
    self->field_text_103.color.set_constant();
    self->field_text_103.font_family.set_constant();
    self->field_text_103.font_italic.set_constant();
    self->field_text_103.font_size.set_constant();
    self->field_text_103.font_weight.set_constant();
    self->field_text_103.height.set_constant();
    self->field_text_103.horizontal_alignment.set_constant();
    self->field_text_103.letter_spacing.set_constant();
    self->field_text_103.line_height_factor.set_constant();
    self->field_text_103.max_lines.set_constant();
    self->field_text_103.overflow.set_constant();
    self->field_text_103.stroke.set_constant();
    self->field_text_103.stroke_style.set_constant();
    self->field_text_103.stroke_width.set_constant();
    self->field_text_103.text.set_constant();
    self->field_text_103.vertical_alignment.set_constant();
    self->field_text_103.wrap.set_constant();
    self->field_text_104.color.set_constant();
    self->field_text_104.font_size.set_constant();
    self->field_text_104.font_weight.set_constant();
    self->field_text_104.height.set_constant();
    self->field_text_104.horizontal_alignment.set_constant();
    self->field_text_104.max_lines.set_constant();
    self->field_text_104.text.set_constant();
    self->field_text_104.vertical_alignment.set_constant();
    self->field_text_104.width.set_constant();
    self->field_text_106.color.set_constant();
    self->field_text_106.font_family.set_constant();
    self->field_text_106.font_italic.set_constant();
    self->field_text_106.font_size.set_constant();
    self->field_text_106.font_weight.set_constant();
    self->field_text_106.height.set_constant();
    self->field_text_106.horizontal_alignment.set_constant();
    self->field_text_106.letter_spacing.set_constant();
    self->field_text_106.line_height_factor.set_constant();
    self->field_text_106.max_lines.set_constant();
    self->field_text_106.overflow.set_constant();
    self->field_text_106.stroke.set_constant();
    self->field_text_106.stroke_style.set_constant();
    self->field_text_106.stroke_width.set_constant();
    self->field_text_106.text.set_constant();
    self->field_text_106.vertical_alignment.set_constant();
    self->field_text_106.width.set_constant();
    self->field_text_106.wrap.set_constant();
    self->field_text_107.color.set_constant();
    self->field_text_107.font_family.set_constant();
    self->field_text_107.font_italic.set_constant();
    self->field_text_107.font_size.set_constant();
    self->field_text_107.font_weight.set_constant();
    self->field_text_107.height.set_constant();
    self->field_text_107.horizontal_alignment.set_constant();
    self->field_text_107.letter_spacing.set_constant();
    self->field_text_107.line_height_factor.set_constant();
    self->field_text_107.max_lines.set_constant();
    self->field_text_107.overflow.set_constant();
    self->field_text_107.stroke.set_constant();
    self->field_text_107.stroke_style.set_constant();
    self->field_text_107.stroke_width.set_constant();
    self->field_text_107.text.set_constant();
    self->field_text_107.vertical_alignment.set_constant();
    self->field_text_107.wrap.set_constant();
    self->field_text_108.color.set_constant();
    self->field_text_108.font_size.set_constant();
    self->field_text_108.font_weight.set_constant();
    self->field_text_108.height.set_constant();
    self->field_text_108.horizontal_alignment.set_constant();
    self->field_text_108.max_lines.set_constant();
    self->field_text_108.text.set_constant();
    self->field_text_108.vertical_alignment.set_constant();
    self->field_text_108.width.set_constant();
    self->field_text_110.color.set_constant();
    self->field_text_110.font_family.set_constant();
    self->field_text_110.font_italic.set_constant();
    self->field_text_110.font_size.set_constant();
    self->field_text_110.font_weight.set_constant();
    self->field_text_110.height.set_constant();
    self->field_text_110.horizontal_alignment.set_constant();
    self->field_text_110.letter_spacing.set_constant();
    self->field_text_110.line_height_factor.set_constant();
    self->field_text_110.max_lines.set_constant();
    self->field_text_110.overflow.set_constant();
    self->field_text_110.stroke.set_constant();
    self->field_text_110.stroke_style.set_constant();
    self->field_text_110.stroke_width.set_constant();
    self->field_text_110.text.set_constant();
    self->field_text_110.vertical_alignment.set_constant();
    self->field_text_110.width.set_constant();
    self->field_text_110.wrap.set_constant();
    self->field_text_111.color.set_constant();
    self->field_text_111.font_family.set_constant();
    self->field_text_111.font_italic.set_constant();
    self->field_text_111.font_size.set_constant();
    self->field_text_111.font_weight.set_constant();
    self->field_text_111.height.set_constant();
    self->field_text_111.horizontal_alignment.set_constant();
    self->field_text_111.letter_spacing.set_constant();
    self->field_text_111.line_height_factor.set_constant();
    self->field_text_111.max_lines.set_constant();
    self->field_text_111.overflow.set_constant();
    self->field_text_111.stroke.set_constant();
    self->field_text_111.stroke_style.set_constant();
    self->field_text_111.stroke_width.set_constant();
    self->field_text_111.text.set_constant();
    self->field_text_111.vertical_alignment.set_constant();
    self->field_text_111.wrap.set_constant();
    self->field_text_112.color.set_constant();
    self->field_text_112.font_size.set_constant();
    self->field_text_112.font_weight.set_constant();
    self->field_text_112.height.set_constant();
    self->field_text_112.horizontal_alignment.set_constant();
    self->field_text_112.max_lines.set_constant();
    self->field_text_112.text.set_constant();
    self->field_text_112.vertical_alignment.set_constant();
    self->field_text_112.width.set_constant();
    self->field_text_114.color.set_constant();
    self->field_text_114.font_family.set_constant();
    self->field_text_114.font_italic.set_constant();
    self->field_text_114.font_size.set_constant();
    self->field_text_114.font_weight.set_constant();
    self->field_text_114.height.set_constant();
    self->field_text_114.horizontal_alignment.set_constant();
    self->field_text_114.letter_spacing.set_constant();
    self->field_text_114.line_height_factor.set_constant();
    self->field_text_114.max_lines.set_constant();
    self->field_text_114.overflow.set_constant();
    self->field_text_114.stroke.set_constant();
    self->field_text_114.stroke_style.set_constant();
    self->field_text_114.stroke_width.set_constant();
    self->field_text_114.text.set_constant();
    self->field_text_114.vertical_alignment.set_constant();
    self->field_text_114.width.set_constant();
    self->field_text_114.wrap.set_constant();
    self->field_text_115.color.set_constant();
    self->field_text_115.font_family.set_constant();
    self->field_text_115.font_italic.set_constant();
    self->field_text_115.font_size.set_constant();
    self->field_text_115.font_weight.set_constant();
    self->field_text_115.height.set_constant();
    self->field_text_115.horizontal_alignment.set_constant();
    self->field_text_115.letter_spacing.set_constant();
    self->field_text_115.line_height_factor.set_constant();
    self->field_text_115.max_lines.set_constant();
    self->field_text_115.overflow.set_constant();
    self->field_text_115.stroke.set_constant();
    self->field_text_115.stroke_style.set_constant();
    self->field_text_115.stroke_width.set_constant();
    self->field_text_115.text.set_constant();
    self->field_text_115.vertical_alignment.set_constant();
    self->field_text_115.wrap.set_constant();
    self->field_text_116.color.set_constant();
    self->field_text_116.font_size.set_constant();
    self->field_text_116.font_weight.set_constant();
    self->field_text_116.height.set_constant();
    self->field_text_116.horizontal_alignment.set_constant();
    self->field_text_116.max_lines.set_constant();
    self->field_text_116.text.set_constant();
    self->field_text_116.vertical_alignment.set_constant();
    self->field_text_116.width.set_constant();
    self->field_text_118.color.set_constant();
    self->field_text_118.font_family.set_constant();
    self->field_text_118.font_italic.set_constant();
    self->field_text_118.font_size.set_constant();
    self->field_text_118.font_weight.set_constant();
    self->field_text_118.height.set_constant();
    self->field_text_118.horizontal_alignment.set_constant();
    self->field_text_118.letter_spacing.set_constant();
    self->field_text_118.line_height_factor.set_constant();
    self->field_text_118.max_lines.set_constant();
    self->field_text_118.overflow.set_constant();
    self->field_text_118.stroke.set_constant();
    self->field_text_118.stroke_style.set_constant();
    self->field_text_118.stroke_width.set_constant();
    self->field_text_118.text.set_constant();
    self->field_text_118.vertical_alignment.set_constant();
    self->field_text_118.width.set_constant();
    self->field_text_118.wrap.set_constant();
    self->field_text_119.color.set_constant();
    self->field_text_119.font_family.set_constant();
    self->field_text_119.font_italic.set_constant();
    self->field_text_119.font_size.set_constant();
    self->field_text_119.font_weight.set_constant();
    self->field_text_119.height.set_constant();
    self->field_text_119.horizontal_alignment.set_constant();
    self->field_text_119.letter_spacing.set_constant();
    self->field_text_119.line_height_factor.set_constant();
    self->field_text_119.max_lines.set_constant();
    self->field_text_119.overflow.set_constant();
    self->field_text_119.stroke.set_constant();
    self->field_text_119.stroke_style.set_constant();
    self->field_text_119.stroke_width.set_constant();
    self->field_text_119.text.set_constant();
    self->field_text_119.vertical_alignment.set_constant();
    self->field_text_119.wrap.set_constant();
    self->field_text_120.color.set_constant();
    self->field_text_120.font_size.set_constant();
    self->field_text_120.font_weight.set_constant();
    self->field_text_120.height.set_constant();
    self->field_text_120.horizontal_alignment.set_constant();
    self->field_text_120.max_lines.set_constant();
    self->field_text_120.text.set_constant();
    self->field_text_120.vertical_alignment.set_constant();
    self->field_text_120.width.set_constant();
    self->field_text_122.color.set_constant();
    self->field_text_122.font_family.set_constant();
    self->field_text_122.font_italic.set_constant();
    self->field_text_122.font_size.set_constant();
    self->field_text_122.font_weight.set_constant();
    self->field_text_122.height.set_constant();
    self->field_text_122.horizontal_alignment.set_constant();
    self->field_text_122.letter_spacing.set_constant();
    self->field_text_122.line_height_factor.set_constant();
    self->field_text_122.max_lines.set_constant();
    self->field_text_122.overflow.set_constant();
    self->field_text_122.stroke.set_constant();
    self->field_text_122.stroke_style.set_constant();
    self->field_text_122.stroke_width.set_constant();
    self->field_text_122.text.set_constant();
    self->field_text_122.vertical_alignment.set_constant();
    self->field_text_122.width.set_constant();
    self->field_text_122.wrap.set_constant();
    self->field_text_123.color.set_constant();
    self->field_text_123.font_family.set_constant();
    self->field_text_123.font_italic.set_constant();
    self->field_text_123.font_size.set_constant();
    self->field_text_123.font_weight.set_constant();
    self->field_text_123.height.set_constant();
    self->field_text_123.horizontal_alignment.set_constant();
    self->field_text_123.letter_spacing.set_constant();
    self->field_text_123.line_height_factor.set_constant();
    self->field_text_123.max_lines.set_constant();
    self->field_text_123.overflow.set_constant();
    self->field_text_123.stroke.set_constant();
    self->field_text_123.stroke_style.set_constant();
    self->field_text_123.stroke_width.set_constant();
    self->field_text_123.text.set_constant();
    self->field_text_123.vertical_alignment.set_constant();
    self->field_text_123.wrap.set_constant();
    self->field_text_124.color.set_constant();
    self->field_text_124.font_size.set_constant();
    self->field_text_124.font_weight.set_constant();
    self->field_text_124.height.set_constant();
    self->field_text_124.horizontal_alignment.set_constant();
    self->field_text_124.max_lines.set_constant();
    self->field_text_124.text.set_constant();
    self->field_text_124.vertical_alignment.set_constant();
    self->field_text_124.width.set_constant();
    self->field_rectangle_127.background.set_constant();
    self->field_rectangle_127.border_color.set_constant();
    self->field_rectangle_127.border_radius.set_constant();
    self->field_rectangle_127.border_width.set_constant();
    self->field_text_128.color.set_constant();
    self->field_text_128.font_size.set_constant();
    self->field_text_128.font_weight.set_constant();
    self->field_text_128.height.set_constant();
    self->field_text_128.horizontal_alignment.set_constant();
    self->field_text_128.max_lines.set_constant();
    self->field_text_128.text.set_constant();
    self->field_text_128.vertical_alignment.set_constant();
    self->field_text_130.color.set_constant();
    self->field_text_130.font_family.set_constant();
    self->field_text_130.font_italic.set_constant();
    self->field_text_130.font_size.set_constant();
    self->field_text_130.font_weight.set_constant();
    self->field_text_130.height.set_constant();
    self->field_text_130.horizontal_alignment.set_constant();
    self->field_text_130.letter_spacing.set_constant();
    self->field_text_130.line_height_factor.set_constant();
    self->field_text_130.max_lines.set_constant();
    self->field_text_130.overflow.set_constant();
    self->field_text_130.stroke.set_constant();
    self->field_text_130.stroke_style.set_constant();
    self->field_text_130.stroke_width.set_constant();
    self->field_text_130.text.set_constant();
    self->field_text_130.vertical_alignment.set_constant();
    self->field_text_130.wrap.set_constant();
    self->field_rectangle_131.background.set_constant();
    self->field_rectangle_131.border_color.set_constant();
    self->field_rectangle_131.border_radius.set_constant();
    self->field_rectangle_131.border_width.set_constant();
    self->field_text_134.color.set_constant();
    self->field_text_134.font_family.set_constant();
    self->field_text_134.font_italic.set_constant();
    self->field_text_134.font_size.set_constant();
    self->field_text_134.font_weight.set_constant();
    self->field_text_134.height.set_constant();
    self->field_text_134.horizontal_alignment.set_constant();
    self->field_text_134.letter_spacing.set_constant();
    self->field_text_134.line_height_factor.set_constant();
    self->field_text_134.max_lines.set_constant();
    self->field_text_134.overflow.set_constant();
    self->field_text_134.stroke.set_constant();
    self->field_text_134.stroke_style.set_constant();
    self->field_text_134.stroke_width.set_constant();
    self->field_text_134.text.set_constant();
    self->field_text_134.vertical_alignment.set_constant();
    self->field_text_134.wrap.set_constant();
    self->field_text_136.color.set_constant();
    self->field_text_136.font_size.set_constant();
    self->field_text_136.font_weight.set_constant();
    self->field_text_136.height.set_constant();
    self->field_text_136.horizontal_alignment.set_constant();
    self->field_text_136.max_lines.set_constant();
    self->field_text_136.vertical_alignment.set_constant();
    self->field_rectangle_137.background.set_constant();
    self->field_rectangle_139.background.set_constant();
    self->field_rectangle_139.border_color.set_constant();
    self->field_rectangle_139.border_radius.set_constant();
    self->field_rectangle_139.border_width.set_constant();
    self->field_text_141.color.set_constant();
    self->field_text_141.font_size.set_constant();
    self->field_text_141.font_weight.set_constant();
    self->field_text_141.horizontal_alignment.set_constant();
    self->field_text_141.max_lines.set_constant();
    self->field_text_141.text.set_constant();
    self->field_text_141.vertical_alignment.set_constant();
    self->field_text_142.color.set_constant();
    self->field_text_142.font_family.set_constant();
    self->field_text_142.font_italic.set_constant();
    self->field_text_142.font_size.set_constant();
    self->field_text_142.font_weight.set_constant();
    self->field_text_142.horizontal_alignment.set_constant();
    self->field_text_142.letter_spacing.set_constant();
    self->field_text_142.line_height_factor.set_constant();
    self->field_text_142.max_lines.set_constant();
    self->field_text_142.overflow.set_constant();
    self->field_text_142.stroke.set_constant();
    self->field_text_142.stroke_style.set_constant();
    self->field_text_142.stroke_width.set_constant();
    self->field_text_142.vertical_alignment.set_constant();
    self->field_text_142.wrap.set_constant();
    self->field_rectangle_144.background.set_constant();
    self->field_rectangle_144.border_color.set_constant();
    self->field_rectangle_144.border_radius.set_constant();
    self->field_rectangle_144.border_width.set_constant();
    self->field_text_146.color.set_constant();
    self->field_text_146.font_size.set_constant();
    self->field_text_146.font_weight.set_constant();
    self->field_text_146.horizontal_alignment.set_constant();
    self->field_text_146.max_lines.set_constant();
    self->field_text_146.text.set_constant();
    self->field_text_146.vertical_alignment.set_constant();
    self->field_text_147.color.set_constant();
    self->field_text_147.font_family.set_constant();
    self->field_text_147.font_italic.set_constant();
    self->field_text_147.font_size.set_constant();
    self->field_text_147.font_weight.set_constant();
    self->field_text_147.horizontal_alignment.set_constant();
    self->field_text_147.letter_spacing.set_constant();
    self->field_text_147.line_height_factor.set_constant();
    self->field_text_147.max_lines.set_constant();
    self->field_text_147.overflow.set_constant();
    self->field_text_147.stroke.set_constant();
    self->field_text_147.stroke_style.set_constant();
    self->field_text_147.stroke_width.set_constant();
    self->field_text_147.vertical_alignment.set_constant();
    self->field_text_147.wrap.set_constant();
    self->field_text_148.color.set_constant();
    self->field_text_148.font_size.set_constant();
    self->field_text_148.font_weight.set_constant();
    self->field_text_148.height.set_constant();
    self->field_text_148.horizontal_alignment.set_constant();
    self->field_text_148.max_lines.set_constant();
    self->field_text_148.text.set_constant();
    self->field_text_148.vertical_alignment.set_constant();
    self->field_rectangle_150.background.set_constant();
    self->field_rectangle_150.border_color.set_constant();
    self->field_rectangle_150.border_radius.set_constant();
    self->field_rectangle_150.border_width.set_constant();
    self->field_text_151.color.set_constant();
    self->field_text_151.font_family.set_constant();
    self->field_text_151.font_italic.set_constant();
    self->field_text_151.font_size.set_constant();
    self->field_text_151.font_weight.set_constant();
    self->field_text_151.horizontal_alignment.set_constant();
    self->field_text_151.letter_spacing.set_constant();
    self->field_text_151.line_height_factor.set_constant();
    self->field_text_151.max_lines.set_constant();
    self->field_text_151.overflow.set_constant();
    self->field_text_151.stroke.set_constant();
    self->field_text_151.stroke_style.set_constant();
    self->field_text_151.stroke_width.set_constant();
    self->field_text_151.text.set_constant();
    self->field_text_151.vertical_alignment.set_constant();
    self->field_text_151.wrap.set_constant();
    self->field_text_153.color.set_constant();
    self->field_text_153.font_family.set_constant();
    self->field_text_153.font_italic.set_constant();
    self->field_text_153.font_size.set_constant();
    self->field_text_153.font_weight.set_constant();
    self->field_text_153.height.set_constant();
    self->field_text_153.horizontal_alignment.set_constant();
    self->field_text_153.letter_spacing.set_constant();
    self->field_text_153.line_height_factor.set_constant();
    self->field_text_153.max_lines.set_constant();
    self->field_text_153.overflow.set_constant();
    self->field_text_153.stroke.set_constant();
    self->field_text_153.stroke_style.set_constant();
    self->field_text_153.stroke_width.set_constant();
    self->field_text_153.vertical_alignment.set_constant();
    self->field_text_153.wrap.set_constant();
    self->field_text_154.color.set_constant();
    self->field_text_154.font_family.set_constant();
    self->field_text_154.font_italic.set_constant();
    self->field_text_154.font_size.set_constant();
    self->field_text_154.font_weight.set_constant();
    self->field_text_154.height.set_constant();
    self->field_text_154.horizontal_alignment.set_constant();
    self->field_text_154.letter_spacing.set_constant();
    self->field_text_154.line_height_factor.set_constant();
    self->field_text_154.max_lines.set_constant();
    self->field_text_154.overflow.set_constant();
    self->field_text_154.stroke.set_constant();
    self->field_text_154.stroke_style.set_constant();
    self->field_text_154.stroke_width.set_constant();
    self->field_text_154.vertical_alignment.set_constant();
    self->field_text_154.wrap.set_constant();
    self->field_rectangle_156.background.set_constant();
    self->field_rectangle_156.border_color.set_constant();
    self->field_rectangle_156.border_radius.set_constant();
    self->field_rectangle_156.border_width.set_constant();
    self->field_text_157.color.set_constant();
    self->field_text_157.font_family.set_constant();
    self->field_text_157.font_italic.set_constant();
    self->field_text_157.font_size.set_constant();
    self->field_text_157.font_weight.set_constant();
    self->field_text_157.horizontal_alignment.set_constant();
    self->field_text_157.letter_spacing.set_constant();
    self->field_text_157.line_height_factor.set_constant();
    self->field_text_157.max_lines.set_constant();
    self->field_text_157.overflow.set_constant();
    self->field_text_157.stroke.set_constant();
    self->field_text_157.stroke_style.set_constant();
    self->field_text_157.stroke_width.set_constant();
    self->field_text_157.text.set_constant();
    self->field_text_157.vertical_alignment.set_constant();
    self->field_text_157.wrap.set_constant();
    self->field_text_159.color.set_constant();
    self->field_text_159.font_family.set_constant();
    self->field_text_159.font_italic.set_constant();
    self->field_text_159.font_size.set_constant();
    self->field_text_159.font_weight.set_constant();
    self->field_text_159.height.set_constant();
    self->field_text_159.horizontal_alignment.set_constant();
    self->field_text_159.letter_spacing.set_constant();
    self->field_text_159.line_height_factor.set_constant();
    self->field_text_159.max_lines.set_constant();
    self->field_text_159.overflow.set_constant();
    self->field_text_159.stroke.set_constant();
    self->field_text_159.stroke_style.set_constant();
    self->field_text_159.stroke_width.set_constant();
    self->field_text_159.vertical_alignment.set_constant();
    self->field_text_159.wrap.set_constant();
    self->field_text_160.color.set_constant();
    self->field_text_160.font_family.set_constant();
    self->field_text_160.font_italic.set_constant();
    self->field_text_160.font_size.set_constant();
    self->field_text_160.font_weight.set_constant();
    self->field_text_160.height.set_constant();
    self->field_text_160.horizontal_alignment.set_constant();
    self->field_text_160.letter_spacing.set_constant();
    self->field_text_160.line_height_factor.set_constant();
    self->field_text_160.max_lines.set_constant();
    self->field_text_160.overflow.set_constant();
    self->field_text_160.stroke.set_constant();
    self->field_text_160.stroke_style.set_constant();
    self->field_text_160.stroke_width.set_constant();
    self->field_text_160.vertical_alignment.set_constant();
    self->field_text_160.wrap.set_constant();
    self->field_rectangle_162.background.set_constant();
    self->field_rectangle_162.border_color.set_constant();
    self->field_rectangle_162.border_radius.set_constant();
    self->field_rectangle_162.border_width.set_constant();
    self->field_text_163.color.set_constant();
    self->field_text_163.font_family.set_constant();
    self->field_text_163.font_italic.set_constant();
    self->field_text_163.font_size.set_constant();
    self->field_text_163.font_weight.set_constant();
    self->field_text_163.horizontal_alignment.set_constant();
    self->field_text_163.letter_spacing.set_constant();
    self->field_text_163.line_height_factor.set_constant();
    self->field_text_163.max_lines.set_constant();
    self->field_text_163.overflow.set_constant();
    self->field_text_163.stroke.set_constant();
    self->field_text_163.stroke_style.set_constant();
    self->field_text_163.stroke_width.set_constant();
    self->field_text_163.text.set_constant();
    self->field_text_163.vertical_alignment.set_constant();
    self->field_text_163.wrap.set_constant();
    self->field_text_165.color.set_constant();
    self->field_text_165.font_family.set_constant();
    self->field_text_165.font_italic.set_constant();
    self->field_text_165.font_size.set_constant();
    self->field_text_165.font_weight.set_constant();
    self->field_text_165.height.set_constant();
    self->field_text_165.horizontal_alignment.set_constant();
    self->field_text_165.letter_spacing.set_constant();
    self->field_text_165.line_height_factor.set_constant();
    self->field_text_165.max_lines.set_constant();
    self->field_text_165.overflow.set_constant();
    self->field_text_165.stroke.set_constant();
    self->field_text_165.stroke_style.set_constant();
    self->field_text_165.stroke_width.set_constant();
    self->field_text_165.vertical_alignment.set_constant();
    self->field_text_165.wrap.set_constant();
    self->field_text_166.color.set_constant();
    self->field_text_166.font_family.set_constant();
    self->field_text_166.font_italic.set_constant();
    self->field_text_166.font_size.set_constant();
    self->field_text_166.font_weight.set_constant();
    self->field_text_166.height.set_constant();
    self->field_text_166.horizontal_alignment.set_constant();
    self->field_text_166.letter_spacing.set_constant();
    self->field_text_166.line_height_factor.set_constant();
    self->field_text_166.max_lines.set_constant();
    self->field_text_166.overflow.set_constant();
    self->field_text_166.stroke.set_constant();
    self->field_text_166.stroke_style.set_constant();
    self->field_text_166.stroke_width.set_constant();
    self->field_text_166.vertical_alignment.set_constant();
    self->field_text_166.wrap.set_constant();
    self->field_rectangle_168.background.set_constant();
    self->field_rectangle_168.border_color.set_constant();
    self->field_rectangle_168.border_radius.set_constant();
    self->field_rectangle_168.border_width.set_constant();
    self->field_text_169.color.set_constant();
    self->field_text_169.font_family.set_constant();
    self->field_text_169.font_italic.set_constant();
    self->field_text_169.font_size.set_constant();
    self->field_text_169.font_weight.set_constant();
    self->field_text_169.horizontal_alignment.set_constant();
    self->field_text_169.letter_spacing.set_constant();
    self->field_text_169.line_height_factor.set_constant();
    self->field_text_169.max_lines.set_constant();
    self->field_text_169.overflow.set_constant();
    self->field_text_169.stroke.set_constant();
    self->field_text_169.stroke_style.set_constant();
    self->field_text_169.stroke_width.set_constant();
    self->field_text_169.text.set_constant();
    self->field_text_169.vertical_alignment.set_constant();
    self->field_text_169.wrap.set_constant();
    self->field_text_171.color.set_constant();
    self->field_text_171.font_family.set_constant();
    self->field_text_171.font_italic.set_constant();
    self->field_text_171.font_size.set_constant();
    self->field_text_171.font_weight.set_constant();
    self->field_text_171.height.set_constant();
    self->field_text_171.horizontal_alignment.set_constant();
    self->field_text_171.letter_spacing.set_constant();
    self->field_text_171.line_height_factor.set_constant();
    self->field_text_171.max_lines.set_constant();
    self->field_text_171.overflow.set_constant();
    self->field_text_171.stroke.set_constant();
    self->field_text_171.stroke_style.set_constant();
    self->field_text_171.stroke_width.set_constant();
    self->field_text_171.vertical_alignment.set_constant();
    self->field_text_171.wrap.set_constant();
    self->field_text_172.color.set_constant();
    self->field_text_172.font_family.set_constant();
    self->field_text_172.font_italic.set_constant();
    self->field_text_172.font_size.set_constant();
    self->field_text_172.font_weight.set_constant();
    self->field_text_172.height.set_constant();
    self->field_text_172.horizontal_alignment.set_constant();
    self->field_text_172.letter_spacing.set_constant();
    self->field_text_172.line_height_factor.set_constant();
    self->field_text_172.max_lines.set_constant();
    self->field_text_172.overflow.set_constant();
    self->field_text_172.stroke.set_constant();
    self->field_text_172.stroke_style.set_constant();
    self->field_text_172.stroke_width.set_constant();
    self->field_text_172.vertical_alignment.set_constant();
    self->field_text_172.wrap.set_constant();
    self->field_rectangle_174.background.set_constant();
    self->field_rectangle_174.border_color.set_constant();
    self->field_rectangle_174.border_radius.set_constant();
    self->field_rectangle_174.border_width.set_constant();
    self->field_text_177.color.set_constant();
    self->field_text_177.font_size.set_constant();
    self->field_text_177.font_weight.set_constant();
    self->field_text_177.height.set_constant();
    self->field_text_177.horizontal_alignment.set_constant();
    self->field_text_177.max_lines.set_constant();
    self->field_text_177.text.set_constant();
    self->field_text_177.vertical_alignment.set_constant();
    self->field_text_179.color.set_constant();
    self->field_text_179.font_family.set_constant();
    self->field_text_179.font_italic.set_constant();
    self->field_text_179.font_size.set_constant();
    self->field_text_179.font_weight.set_constant();
    self->field_text_179.height.set_constant();
    self->field_text_179.horizontal_alignment.set_constant();
    self->field_text_179.letter_spacing.set_constant();
    self->field_text_179.line_height_factor.set_constant();
    self->field_text_179.max_lines.set_constant();
    self->field_text_179.overflow.set_constant();
    self->field_text_179.stroke.set_constant();
    self->field_text_179.stroke_style.set_constant();
    self->field_text_179.stroke_width.set_constant();
    self->field_text_179.text.set_constant();
    self->field_text_179.vertical_alignment.set_constant();
    self->field_text_179.wrap.set_constant();
    self->field_rectangle_181.background.set_constant();
    self->field_rectangle_181.border_color.set_constant();
    self->field_rectangle_181.border_radius.set_constant();
    self->field_rectangle_181.border_width.set_constant();
    self->field_text_183.color.set_constant();
    self->field_text_183.font_family.set_constant();
    self->field_text_183.font_italic.set_constant();
    self->field_text_183.font_size.set_constant();
    self->field_text_183.font_weight.set_constant();
    self->field_text_183.horizontal_alignment.set_constant();
    self->field_text_183.letter_spacing.set_constant();
    self->field_text_183.line_height_factor.set_constant();
    self->field_text_183.max_lines.set_constant();
    self->field_text_183.overflow.set_constant();
    self->field_text_183.stroke.set_constant();
    self->field_text_183.stroke_style.set_constant();
    self->field_text_183.stroke_width.set_constant();
    self->field_text_183.text.set_constant();
    self->field_text_183.vertical_alignment.set_constant();
    self->field_text_183.wrap.set_constant();
    self->field_text_184.color.set_constant();
    self->field_text_184.font_family.set_constant();
    self->field_text_184.font_italic.set_constant();
    self->field_text_184.font_size.set_constant();
    self->field_text_184.font_weight.set_constant();
    self->field_text_184.horizontal_alignment.set_constant();
    self->field_text_184.letter_spacing.set_constant();
    self->field_text_184.line_height_factor.set_constant();
    self->field_text_184.max_lines.set_constant();
    self->field_text_184.overflow.set_constant();
    self->field_text_184.stroke.set_constant();
    self->field_text_184.stroke_style.set_constant();
    self->field_text_184.stroke_width.set_constant();
    self->field_text_184.text.set_constant();
    self->field_text_184.vertical_alignment.set_constant();
    self->field_text_184.wrap.set_constant();
    self->field_rectangle_185.background.set_constant();
    self->field_rectangle_185.border_color.set_constant();
    self->field_rectangle_185.border_radius.set_constant();
    self->field_rectangle_185.border_width.set_constant();
    self->field_text_187.color.set_constant();
    self->field_text_187.font_family.set_constant();
    self->field_text_187.font_italic.set_constant();
    self->field_text_187.font_size.set_constant();
    self->field_text_187.font_weight.set_constant();
    self->field_text_187.horizontal_alignment.set_constant();
    self->field_text_187.letter_spacing.set_constant();
    self->field_text_187.line_height_factor.set_constant();
    self->field_text_187.max_lines.set_constant();
    self->field_text_187.overflow.set_constant();
    self->field_text_187.stroke.set_constant();
    self->field_text_187.stroke_style.set_constant();
    self->field_text_187.stroke_width.set_constant();
    self->field_text_187.text.set_constant();
    self->field_text_187.vertical_alignment.set_constant();
    self->field_text_187.wrap.set_constant();
    self->field_text_188.color.set_constant();
    self->field_text_188.font_family.set_constant();
    self->field_text_188.font_italic.set_constant();
    self->field_text_188.font_size.set_constant();
    self->field_text_188.font_weight.set_constant();
    self->field_text_188.horizontal_alignment.set_constant();
    self->field_text_188.letter_spacing.set_constant();
    self->field_text_188.line_height_factor.set_constant();
    self->field_text_188.max_lines.set_constant();
    self->field_text_188.overflow.set_constant();
    self->field_text_188.stroke.set_constant();
    self->field_text_188.stroke_style.set_constant();
    self->field_text_188.stroke_width.set_constant();
    self->field_text_188.text.set_constant();
    self->field_text_188.vertical_alignment.set_constant();
    self->field_text_188.wrap.set_constant();
    self->field_rectangle_189.background.set_constant();
    self->field_rectangle_189.border_color.set_constant();
    self->field_rectangle_189.border_radius.set_constant();
    self->field_rectangle_189.border_width.set_constant();
    self->field_text_191.color.set_constant();
    self->field_text_191.font_family.set_constant();
    self->field_text_191.font_italic.set_constant();
    self->field_text_191.font_size.set_constant();
    self->field_text_191.font_weight.set_constant();
    self->field_text_191.horizontal_alignment.set_constant();
    self->field_text_191.letter_spacing.set_constant();
    self->field_text_191.line_height_factor.set_constant();
    self->field_text_191.max_lines.set_constant();
    self->field_text_191.overflow.set_constant();
    self->field_text_191.stroke.set_constant();
    self->field_text_191.stroke_style.set_constant();
    self->field_text_191.stroke_width.set_constant();
    self->field_text_191.text.set_constant();
    self->field_text_191.vertical_alignment.set_constant();
    self->field_text_191.wrap.set_constant();
    self->field_text_192.color.set_constant();
    self->field_text_192.font_family.set_constant();
    self->field_text_192.font_italic.set_constant();
    self->field_text_192.font_size.set_constant();
    self->field_text_192.font_weight.set_constant();
    self->field_text_192.horizontal_alignment.set_constant();
    self->field_text_192.letter_spacing.set_constant();
    self->field_text_192.line_height_factor.set_constant();
    self->field_text_192.max_lines.set_constant();
    self->field_text_192.overflow.set_constant();
    self->field_text_192.stroke.set_constant();
    self->field_text_192.stroke_style.set_constant();
    self->field_text_192.stroke_width.set_constant();
    self->field_text_192.text.set_constant();
    self->field_text_192.vertical_alignment.set_constant();
    self->field_text_192.wrap.set_constant();
    self->field_rectangle_193.background.set_constant();
    self->field_rectangle_193.border_color.set_constant();
    self->field_rectangle_193.border_radius.set_constant();
    self->field_rectangle_193.border_width.set_constant();
    self->field_text_195.color.set_constant();
    self->field_text_195.font_family.set_constant();
    self->field_text_195.font_italic.set_constant();
    self->field_text_195.font_size.set_constant();
    self->field_text_195.font_weight.set_constant();
    self->field_text_195.horizontal_alignment.set_constant();
    self->field_text_195.letter_spacing.set_constant();
    self->field_text_195.line_height_factor.set_constant();
    self->field_text_195.max_lines.set_constant();
    self->field_text_195.overflow.set_constant();
    self->field_text_195.stroke.set_constant();
    self->field_text_195.stroke_style.set_constant();
    self->field_text_195.stroke_width.set_constant();
    self->field_text_195.text.set_constant();
    self->field_text_195.vertical_alignment.set_constant();
    self->field_text_195.wrap.set_constant();
    self->field_text_196.color.set_constant();
    self->field_text_196.font_family.set_constant();
    self->field_text_196.font_italic.set_constant();
    self->field_text_196.font_size.set_constant();
    self->field_text_196.font_weight.set_constant();
    self->field_text_196.horizontal_alignment.set_constant();
    self->field_text_196.letter_spacing.set_constant();
    self->field_text_196.line_height_factor.set_constant();
    self->field_text_196.max_lines.set_constant();
    self->field_text_196.overflow.set_constant();
    self->field_text_196.stroke.set_constant();
    self->field_text_196.stroke_style.set_constant();
    self->field_text_196.stroke_width.set_constant();
    self->field_text_196.text.set_constant();
    self->field_text_196.vertical_alignment.set_constant();
    self->field_text_196.wrap.set_constant();
    self->field_rectangle_197.background.set_constant();
    self->field_rectangle_197.border_color.set_constant();
    self->field_rectangle_197.border_radius.set_constant();
    self->field_rectangle_197.border_width.set_constant();
    self->field_text_199.color.set_constant();
    self->field_text_199.font_family.set_constant();
    self->field_text_199.font_italic.set_constant();
    self->field_text_199.font_size.set_constant();
    self->field_text_199.font_weight.set_constant();
    self->field_text_199.horizontal_alignment.set_constant();
    self->field_text_199.letter_spacing.set_constant();
    self->field_text_199.line_height_factor.set_constant();
    self->field_text_199.max_lines.set_constant();
    self->field_text_199.overflow.set_constant();
    self->field_text_199.stroke.set_constant();
    self->field_text_199.stroke_style.set_constant();
    self->field_text_199.stroke_width.set_constant();
    self->field_text_199.text.set_constant();
    self->field_text_199.vertical_alignment.set_constant();
    self->field_text_199.wrap.set_constant();
    self->field_text_200.color.set_constant();
    self->field_text_200.font_family.set_constant();
    self->field_text_200.font_italic.set_constant();
    self->field_text_200.font_size.set_constant();
    self->field_text_200.font_weight.set_constant();
    self->field_text_200.horizontal_alignment.set_constant();
    self->field_text_200.letter_spacing.set_constant();
    self->field_text_200.line_height_factor.set_constant();
    self->field_text_200.max_lines.set_constant();
    self->field_text_200.overflow.set_constant();
    self->field_text_200.stroke.set_constant();
    self->field_text_200.stroke_style.set_constant();
    self->field_text_200.stroke_width.set_constant();
    self->field_text_200.vertical_alignment.set_constant();
    self->field_text_200.wrap.set_constant();
    self->field_rectangle_201.background.set_constant();
    self->field_rectangle_201.border_color.set_constant();
    self->field_rectangle_201.border_radius.set_constant();
    self->field_rectangle_201.border_width.set_constant();
    self->field_text_203.color.set_constant();
    self->field_text_203.font_family.set_constant();
    self->field_text_203.font_italic.set_constant();
    self->field_text_203.font_size.set_constant();
    self->field_text_203.font_weight.set_constant();
    self->field_text_203.horizontal_alignment.set_constant();
    self->field_text_203.letter_spacing.set_constant();
    self->field_text_203.line_height_factor.set_constant();
    self->field_text_203.max_lines.set_constant();
    self->field_text_203.overflow.set_constant();
    self->field_text_203.stroke.set_constant();
    self->field_text_203.stroke_style.set_constant();
    self->field_text_203.stroke_width.set_constant();
    self->field_text_203.text.set_constant();
    self->field_text_203.vertical_alignment.set_constant();
    self->field_text_203.wrap.set_constant();
    self->field_text_204.color.set_constant();
    self->field_text_204.font_family.set_constant();
    self->field_text_204.font_italic.set_constant();
    self->field_text_204.font_size.set_constant();
    self->field_text_204.font_weight.set_constant();
    self->field_text_204.horizontal_alignment.set_constant();
    self->field_text_204.letter_spacing.set_constant();
    self->field_text_204.line_height_factor.set_constant();
    self->field_text_204.max_lines.set_constant();
    self->field_text_204.overflow.set_constant();
    self->field_text_204.stroke.set_constant();
    self->field_text_204.stroke_style.set_constant();
    self->field_text_204.stroke_width.set_constant();
    self->field_text_204.text.set_constant();
    self->field_text_204.vertical_alignment.set_constant();
    self->field_text_204.wrap.set_constant();
    self->field_rectangle_205.background.set_constant();
    self->field_rectangle_205.border_color.set_constant();
    self->field_rectangle_205.border_radius.set_constant();
    self->field_rectangle_205.border_width.set_constant();
    self->field_text_207.color.set_constant();
    self->field_text_207.font_family.set_constant();
    self->field_text_207.font_italic.set_constant();
    self->field_text_207.font_size.set_constant();
    self->field_text_207.font_weight.set_constant();
    self->field_text_207.horizontal_alignment.set_constant();
    self->field_text_207.letter_spacing.set_constant();
    self->field_text_207.line_height_factor.set_constant();
    self->field_text_207.max_lines.set_constant();
    self->field_text_207.overflow.set_constant();
    self->field_text_207.stroke.set_constant();
    self->field_text_207.stroke_style.set_constant();
    self->field_text_207.stroke_width.set_constant();
    self->field_text_207.text.set_constant();
    self->field_text_207.vertical_alignment.set_constant();
    self->field_text_207.wrap.set_constant();
    self->field_text_208.color.set_constant();
    self->field_text_208.font_family.set_constant();
    self->field_text_208.font_italic.set_constant();
    self->field_text_208.font_size.set_constant();
    self->field_text_208.font_weight.set_constant();
    self->field_text_208.horizontal_alignment.set_constant();
    self->field_text_208.letter_spacing.set_constant();
    self->field_text_208.line_height_factor.set_constant();
    self->field_text_208.max_lines.set_constant();
    self->field_text_208.overflow.set_constant();
    self->field_text_208.stroke.set_constant();
    self->field_text_208.stroke_style.set_constant();
    self->field_text_208.stroke_width.set_constant();
    self->field_text_208.text.set_constant();
    self->field_text_208.vertical_alignment.set_constant();
    self->field_text_208.wrap.set_constant();
    self->field_rectangle_209.background.set_constant();
    self->field_rectangle_209.border_color.set_constant();
    self->field_rectangle_209.border_radius.set_constant();
    self->field_rectangle_209.border_width.set_constant();
    self->field_text_211.color.set_constant();
    self->field_text_211.font_family.set_constant();
    self->field_text_211.font_italic.set_constant();
    self->field_text_211.font_size.set_constant();
    self->field_text_211.font_weight.set_constant();
    self->field_text_211.horizontal_alignment.set_constant();
    self->field_text_211.letter_spacing.set_constant();
    self->field_text_211.line_height_factor.set_constant();
    self->field_text_211.max_lines.set_constant();
    self->field_text_211.overflow.set_constant();
    self->field_text_211.stroke.set_constant();
    self->field_text_211.stroke_style.set_constant();
    self->field_text_211.stroke_width.set_constant();
    self->field_text_211.text.set_constant();
    self->field_text_211.vertical_alignment.set_constant();
    self->field_text_211.wrap.set_constant();
    self->field_text_212.color.set_constant();
    self->field_text_212.font_family.set_constant();
    self->field_text_212.font_italic.set_constant();
    self->field_text_212.font_size.set_constant();
    self->field_text_212.font_weight.set_constant();
    self->field_text_212.horizontal_alignment.set_constant();
    self->field_text_212.letter_spacing.set_constant();
    self->field_text_212.line_height_factor.set_constant();
    self->field_text_212.max_lines.set_constant();
    self->field_text_212.overflow.set_constant();
    self->field_text_212.stroke.set_constant();
    self->field_text_212.stroke_style.set_constant();
    self->field_text_212.stroke_width.set_constant();
    self->field_text_212.text.set_constant();
    self->field_text_212.vertical_alignment.set_constant();
    self->field_text_212.wrap.set_constant();
    self->field_rectangle_213.background.set_constant();
    self->field_rectangle_213.border_color.set_constant();
    self->field_rectangle_213.border_radius.set_constant();
    self->field_rectangle_213.border_width.set_constant();
    self->field_text_216.color.set_constant();
    self->field_text_216.font_size.set_constant();
    self->field_text_216.font_weight.set_constant();
    self->field_text_216.height.set_constant();
    self->field_text_216.horizontal_alignment.set_constant();
    self->field_text_216.max_lines.set_constant();
    self->field_text_216.text.set_constant();
    self->field_text_216.vertical_alignment.set_constant();
    self->field_text_218.color.set_constant();
    self->field_text_218.font_size.set_constant();
    self->field_text_218.font_weight.set_constant();
    self->field_text_218.height.set_constant();
    self->field_text_218.horizontal_alignment.set_constant();
    self->field_text_218.max_lines.set_constant();
    self->field_text_218.text.set_constant();
    self->field_text_218.vertical_alignment.set_constant();
    self->field_text_219.color.set_constant();
    self->field_text_219.font_family.set_constant();
    self->field_text_219.font_italic.set_constant();
    self->field_text_219.font_size.set_constant();
    self->field_text_219.font_weight.set_constant();
    self->field_text_219.height.set_constant();
    self->field_text_219.horizontal_alignment.set_constant();
    self->field_text_219.letter_spacing.set_constant();
    self->field_text_219.line_height_factor.set_constant();
    self->field_text_219.max_lines.set_constant();
    self->field_text_219.overflow.set_constant();
    self->field_text_219.stroke.set_constant();
    self->field_text_219.stroke_style.set_constant();
    self->field_text_219.stroke_width.set_constant();
    self->field_text_219.vertical_alignment.set_constant();
    self->field_text_219.wrap.set_constant();
    self->field_text_221.color.set_constant();
    self->field_text_221.font_size.set_constant();
    self->field_text_221.font_weight.set_constant();
    self->field_text_221.height.set_constant();
    self->field_text_221.horizontal_alignment.set_constant();
    self->field_text_221.max_lines.set_constant();
    self->field_text_221.text.set_constant();
    self->field_text_221.vertical_alignment.set_constant();
    self->field_text_221.width.set_constant();
    self->field_rectangle_223.background.set_constant();
    self->field_rectangle_223.border_color.set_constant();
    self->field_rectangle_223.border_radius.set_constant();
    self->field_rectangle_223.border_width.set_constant();
    self->field_rectangle_224.background.set_constant();
    self->field_rectangle_224.border_color.set_constant();
    self->field_rectangle_224.border_radius.set_constant();
    self->field_rectangle_224.border_width.set_constant();
    self->field_text_225.color.set_constant();
    self->field_text_225.font_family.set_constant();
    self->field_text_225.font_italic.set_constant();
    self->field_text_225.font_size.set_constant();
    self->field_text_225.font_weight.set_constant();
    self->field_text_225.height.set_constant();
    self->field_text_225.horizontal_alignment.set_constant();
    self->field_text_225.letter_spacing.set_constant();
    self->field_text_225.line_height_factor.set_constant();
    self->field_text_225.max_lines.set_constant();
    self->field_text_225.overflow.set_constant();
    self->field_text_225.stroke.set_constant();
    self->field_text_225.stroke_style.set_constant();
    self->field_text_225.stroke_width.set_constant();
    self->field_text_225.text.set_constant();
    self->field_text_225.vertical_alignment.set_constant();
    self->field_text_225.width.set_constant();
    self->field_text_225.wrap.set_constant();
    self->field_text_227.color.set_constant();
    self->field_text_227.font_size.set_constant();
    self->field_text_227.font_weight.set_constant();
    self->field_text_227.height.set_constant();
    self->field_text_227.horizontal_alignment.set_constant();
    self->field_text_227.max_lines.set_constant();
    self->field_text_227.text.set_constant();
    self->field_text_227.vertical_alignment.set_constant();
    self->field_text_227.width.set_constant();
    self->field_rectangle_229.background.set_constant();
    self->field_rectangle_229.border_color.set_constant();
    self->field_rectangle_229.border_radius.set_constant();
    self->field_rectangle_229.border_width.set_constant();
    self->field_rectangle_230.background.set_constant();
    self->field_rectangle_230.border_color.set_constant();
    self->field_rectangle_230.border_radius.set_constant();
    self->field_rectangle_230.border_width.set_constant();
    self->field_text_231.color.set_constant();
    self->field_text_231.font_family.set_constant();
    self->field_text_231.font_italic.set_constant();
    self->field_text_231.font_size.set_constant();
    self->field_text_231.font_weight.set_constant();
    self->field_text_231.height.set_constant();
    self->field_text_231.horizontal_alignment.set_constant();
    self->field_text_231.letter_spacing.set_constant();
    self->field_text_231.line_height_factor.set_constant();
    self->field_text_231.max_lines.set_constant();
    self->field_text_231.overflow.set_constant();
    self->field_text_231.stroke.set_constant();
    self->field_text_231.stroke_style.set_constant();
    self->field_text_231.stroke_width.set_constant();
    self->field_text_231.text.set_constant();
    self->field_text_231.vertical_alignment.set_constant();
    self->field_text_231.width.set_constant();
    self->field_text_231.wrap.set_constant();
    self->field_rectangle_234.background.set_constant();
    self->field_rectangle_234.border_color.set_constant();
    self->field_rectangle_234.border_radius.set_constant();
    self->field_rectangle_234.border_width.set_constant();
    self->field_text_236.color.set_constant();
    self->field_text_236.font_size.set_constant();
    self->field_text_236.font_weight.set_constant();
    self->field_text_236.horizontal_alignment.set_constant();
    self->field_text_236.max_lines.set_constant();
    self->field_text_236.text.set_constant();
    self->field_text_236.vertical_alignment.set_constant();
    self->field_text_237.color.set_constant();
    self->field_text_237.font_family.set_constant();
    self->field_text_237.font_italic.set_constant();
    self->field_text_237.font_size.set_constant();
    self->field_text_237.font_weight.set_constant();
    self->field_text_237.horizontal_alignment.set_constant();
    self->field_text_237.letter_spacing.set_constant();
    self->field_text_237.line_height_factor.set_constant();
    self->field_text_237.max_lines.set_constant();
    self->field_text_237.overflow.set_constant();
    self->field_text_237.stroke.set_constant();
    self->field_text_237.stroke_style.set_constant();
    self->field_text_237.stroke_width.set_constant();
    self->field_text_237.vertical_alignment.set_constant();
    self->field_text_237.wrap.set_constant();
    self->field_rectangle_239.background.set_constant();
    self->field_rectangle_239.border_color.set_constant();
    self->field_rectangle_239.border_radius.set_constant();
    self->field_rectangle_239.border_width.set_constant();
    self->field_text_241.color.set_constant();
    self->field_text_241.font_size.set_constant();
    self->field_text_241.font_weight.set_constant();
    self->field_text_241.horizontal_alignment.set_constant();
    self->field_text_241.max_lines.set_constant();
    self->field_text_241.text.set_constant();
    self->field_text_241.vertical_alignment.set_constant();
    self->field_text_242.color.set_constant();
    self->field_text_242.font_family.set_constant();
    self->field_text_242.font_italic.set_constant();
    self->field_text_242.font_size.set_constant();
    self->field_text_242.font_weight.set_constant();
    self->field_text_242.horizontal_alignment.set_constant();
    self->field_text_242.letter_spacing.set_constant();
    self->field_text_242.line_height_factor.set_constant();
    self->field_text_242.max_lines.set_constant();
    self->field_text_242.overflow.set_constant();
    self->field_text_242.stroke.set_constant();
    self->field_text_242.stroke_style.set_constant();
    self->field_text_242.stroke_width.set_constant();
    self->field_text_242.vertical_alignment.set_constant();
    self->field_text_242.wrap.set_constant();
    self->field_rectangle_244.background.set_constant();
    self->field_rectangle_244.border_color.set_constant();
    self->field_rectangle_244.border_radius.set_constant();
    self->field_rectangle_244.border_width.set_constant();
    self->field_text_246.color.set_constant();
    self->field_text_246.font_size.set_constant();
    self->field_text_246.font_weight.set_constant();
    self->field_text_246.horizontal_alignment.set_constant();
    self->field_text_246.max_lines.set_constant();
    self->field_text_246.text.set_constant();
    self->field_text_246.vertical_alignment.set_constant();
    self->field_text_247.color.set_constant();
    self->field_text_247.font_family.set_constant();
    self->field_text_247.font_italic.set_constant();
    self->field_text_247.font_size.set_constant();
    self->field_text_247.font_weight.set_constant();
    self->field_text_247.horizontal_alignment.set_constant();
    self->field_text_247.letter_spacing.set_constant();
    self->field_text_247.line_height_factor.set_constant();
    self->field_text_247.max_lines.set_constant();
    self->field_text_247.overflow.set_constant();
    self->field_text_247.stroke.set_constant();
    self->field_text_247.stroke_style.set_constant();
    self->field_text_247.stroke_width.set_constant();
    self->field_text_247.vertical_alignment.set_constant();
    self->field_text_247.wrap.set_constant();
}

auto MainWindow::user_init () -> void{
    [[maybe_unused]] auto self = this;
    this->field_button_62.user_init();
    this->field_button_63.user_init();
    this->field_button_64.user_init();
}

auto MainWindow::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&]{ [[maybe_unused]] auto layout_info = self->field_root_15_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, 1080, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }() : [&]{ [[maybe_unused]] auto layout_info = [&]{ [[maybe_unused]] auto inlined_fn_arg_1_0 = self->field_root_15_layoutinfo_h.get().preferred;;return ([&]{ [[maybe_unused]] auto layout_info_5 = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(WindowItemVTable), const_cast<slint::cbindgen_private::WindowItem*>(&self->field_root_15), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info_5.max, layout_info_5.max_percent, 720, layout_info_5.min_percent, layout_info_5.preferred, layout_info_5.stretch); }() + [&]{ [[maybe_unused]] auto inlined_fn_arg_2_0 = inlined_fn_arg_1_0;;return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_18_layoutinfo_v.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(66, layout_info.max_percent, 66, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto inlined_fn_arg_3_0 = inlined_fn_arg_2_0;;return [&]{
                    auto box_ortho_solved = slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_30_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(210, layout_info.max_percent, 210, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_56_layoutinfo_h.get())) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), inlined_fn_arg_3_0, 0), slint::private_api::make_slice<int>(nullptr, 0));
                    std::vector<slint::cbindgen_private::LayoutItemInfo> measure_cells_vector;
                    measure_cells_vector.reserve(2);
                    std::size_t cursor = 0;
                    {
                                [[maybe_unused]] float measure_known_w = box_ortho_solved[cursor * 2 + 1];
                                measure_cells_vector.push_back({ (([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_30_layoutinfo_v.get())), {}, {} });
                                ++cursor;
                            }{
                                [[maybe_unused]] float measure_known_w = box_ortho_solved[cursor * 2 + 1];
                                measure_cells_vector.push_back({ ([&]{ [[maybe_unused]] auto inlined_fn_arg_4_0 = measure_known_w;;return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&]{ [[maybe_unused]] auto inlined_fn_arg_5_0 = inlined_fn_arg_4_0;;return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 4>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&]{ [[maybe_unused]] auto inlined_fn_arg_6_0 = ((inlined_fn_arg_5_0 -(float) 24) -(float) 24);;return [&]{
                    auto box_ortho_solved = slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 5>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_58_layoutinfo_h.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_button_62.field_root_3_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->field_button_62.field_root_3_i_layout_6_layoutinfo_h.get().min), layout_info.min_percent, layout_info.preferred, 0); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_button_63.field_root_3_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->field_button_63.field_root_3_i_layout_6_layoutinfo_h.get().min), layout_info.min_percent, layout_info.preferred, 0); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_button_64.field_root_3_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->field_button_64.field_root_3_i_layout_6_layoutinfo_h.get().min), layout_info.min_percent, layout_info.preferred, 0); }()) ) }.data(), 5), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), inlined_fn_arg_6_0, 12), slint::private_api::make_slice<int>(nullptr, 0));
                    std::vector<slint::cbindgen_private::LayoutItemInfo> measure_cells_vector;
                    measure_cells_vector.reserve(5);
                    std::size_t cursor = 0;
                    {
                                [[maybe_unused]] float measure_known_w = box_ortho_solved[cursor * 2 + 1];
                                measure_cells_vector.push_back({ (self->field_root_15_empty_58_layoutinfo_v.get()), {}, {} });
                                ++cursor;
                            }{
                                [[maybe_unused]] float measure_known_w = box_ortho_solved[cursor * 2 + 1];
                                measure_cells_vector.push_back({ ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)), {}, {} });
                                ++cursor;
                            }{
                                [[maybe_unused]] float measure_known_w = box_ortho_solved[cursor * 2 + 1];
                                measure_cells_vector.push_back({ ([&]{ [[maybe_unused]] auto layout_info = self->field_button_62.fn_layoutinfo_v_with_constraint(measure_known_w);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->field_button_62.field_root_3_i_layout_6_layoutinfo_v.get().min), layout_info.min_percent, layout_info.preferred, 0); }()), {}, {} });
                                ++cursor;
                            }{
                                [[maybe_unused]] float measure_known_w = box_ortho_solved[cursor * 2 + 1];
                                measure_cells_vector.push_back({ ([&]{ [[maybe_unused]] auto layout_info = self->field_button_63.fn_layoutinfo_v_with_constraint(measure_known_w);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->field_button_63.field_root_3_i_layout_6_layoutinfo_v.get().min), layout_info.min_percent, layout_info.preferred, 0); }()), {}, {} });
                                ++cursor;
                            }{
                                [[maybe_unused]] float measure_known_w = box_ortho_solved[cursor * 2 + 1];
                                measure_cells_vector.push_back({ ([&]{ [[maybe_unused]] auto layout_info = self->field_button_64.fn_layoutinfo_v_with_constraint(measure_known_w);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->field_button_64.field_root_3_i_layout_6_layoutinfo_v.get().min), layout_info.min_percent, layout_info.preferred, 0); }()), {}, {} });
                                ++cursor;
                            }
                    (void)cursor;
                    return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice(std::span(measure_cells_vector)), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                }(); }();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(66, layout_info.max_percent, 66, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_65_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(86, layout_info.max_percent, 86, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_84_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(312, layout_info.max_percent, 312, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_empty_173_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ) }.data(), 4),16,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(24, 24),slint::cbindgen_private::LayoutAlignment::Stretch); }()); }()), {}, {} });
                                ++cursor;
                            }
                    (void)cursor;
                    return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice(std::span(measure_cells_vector)), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                }(); }()) ) }.data(), 2),0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch); }()); }();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, 720, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }();
}

auto MainWindow::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15.height.get()), float(self->field_root_15.width.get()), float(0), float(0)));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(66), float(self->field_root_15.width.get()), float(0), float(self->field_root_15_empty_16_layout_cache.get()[0])));
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_16_layout_cache.get()[3]), float(self->field_root_15.width.get()), float(0), float(self->field_root_15_empty_16_layout_cache.get()[2])));
        case 3: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(34), float(34), float(self->field_root_15_empty_18_layout_cache.get()[0]), float(0)));
        case 4: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(66), float(self->field_root_15_empty_18_layout_cache.get()[3]), float(self->field_root_15_empty_18_layout_cache.get()[2]), float(0)));
        case 5: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(24), float(1), float(self->field_root_15_empty_18_layout_cache.get()[4]), float(0)));
        case 6: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(66), float(self->field_root_15_empty_18_layout_cache.get()[7]), float(self->field_root_15_empty_18_layout_cache.get()[6]), float(0)));
        case 7: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(66), float(self->field_root_15_empty_18_layout_cache.get()[9]), float(self->field_root_15_empty_18_layout_cache.get()[8]), float(0)));
        case 8: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(94), float(self->field_root_15_empty_18_layout_cache.get()[10]), float(0)));
        case 9: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(66), float(self->field_root_15_empty_18_layout_cache.get()[13]), float(self->field_root_15_empty_18_layout_cache.get()[12]), float(0)));
        case 10: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_text_20.height.get()), float(self->field_text_20.width.get()), float(((34 -(float) self->field_text_20.width.get()) /(float) 2)), float(((34 -(float) self->field_text_20.height.get()) /(float) 2))));
        case 11: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_text_26.height.get()), float(self->field_text_26.width.get()), float(((94 -(float) self->field_text_26.width.get()) /(float) 2)), float(((28 -(float) self->field_text_26.height.get()) /(float) 2))));
        case 12: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_16_layout_cache.get()[3]), float(210), float(self->field_root_15_empty_28_layout_cache.get()[0]), float(0)));
        case 13: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_16_layout_cache.get()[3]), float(self->field_root_15_empty_28_layout_cache.get()[3]), float(self->field_root_15_empty_28_layout_cache.get()[2]), float(0)));
        case 14: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(174), float(18), float(self->field_root_15_empty_30_layout_cache.get()[0])));
        case 15: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(40), float(174), float(18), float(self->field_root_15_empty_30_layout_cache.get()[2])));
        case 16: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(40), float(174), float(18), float(self->field_root_15_empty_30_layout_cache.get()[4])));
        case 17: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(40), float(174), float(18), float(self->field_root_15_empty_30_layout_cache.get()[6])));
        case 18: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(40), float(174), float(18), float(self->field_root_15_empty_30_layout_cache.get()[8])));
        case 19: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_30_layout_cache.get()[11]), float(174), float(18), float(self->field_root_15_empty_30_layout_cache.get()[10])));
        case 20: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(1), float(174), float(18), float(self->field_root_15_empty_30_layout_cache.get()[12])));
        case 21: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(34), float(174), float(18), float(self->field_root_15_empty_30_layout_cache.get()[14])));
        case 22: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(58), float(174), float(18), float(self->field_root_15_empty_30_layout_cache.get()[16])));
        case 23: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(40), float(self->field_root_15_empty_33_layout_cache.get()[1]), float(self->field_root_15_empty_33_layout_cache.get()[0]), float(0)));
        case 24: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(40), float(self->field_root_15_empty_33_layout_cache.get()[3]), float(self->field_root_15_empty_33_layout_cache.get()[2]), float(0)));
        case 25: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(40), float(self->field_root_15_empty_37_layout_cache.get()[1]), float(self->field_root_15_empty_37_layout_cache.get()[0]), float(0)));
        case 26: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(40), float(self->field_root_15_empty_37_layout_cache.get()[3]), float(self->field_root_15_empty_37_layout_cache.get()[2]), float(0)));
        case 27: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(40), float(self->field_root_15_empty_41_layout_cache.get()[1]), float(self->field_root_15_empty_41_layout_cache.get()[0]), float(0)));
        case 28: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(40), float(self->field_root_15_empty_41_layout_cache.get()[3]), float(self->field_root_15_empty_41_layout_cache.get()[2]), float(0)));
        case 29: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(40), float(self->field_root_15_empty_45_layout_cache.get()[1]), float(self->field_root_15_empty_45_layout_cache.get()[0]), float(0)));
        case 30: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(40), float(self->field_root_15_empty_45_layout_cache.get()[3]), float(self->field_root_15_empty_45_layout_cache.get()[2]), float(0)));
        case 31: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_52_layout_cache.get()[1]), float(158), float(8), float(self->field_root_15_empty_52_layout_cache.get()[0])));
        case 32: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_52_layout_cache.get()[3]), float(158), float(8), float(self->field_root_15_empty_52_layout_cache.get()[2])));
        case 33: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(66), float(((self->field_root_15_empty_28_layout_cache.get()[3] -(float) 24) -(float) 24)), float(24), float(self->field_root_15_empty_56_layout_cache.get()[0])));
        case 34: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(86), float(((self->field_root_15_empty_28_layout_cache.get()[3] -(float) 24) -(float) 24)), float(24), float(self->field_root_15_empty_56_layout_cache.get()[2])));
        case 35: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(312), float(((self->field_root_15_empty_28_layout_cache.get()[3] -(float) 24) -(float) 24)), float(24), float(self->field_root_15_empty_56_layout_cache.get()[4])));
        case 36: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_56_layout_cache.get()[7]), float(((self->field_root_15_empty_28_layout_cache.get()[3] -(float) 24) -(float) 24)), float(24), float(self->field_root_15_empty_56_layout_cache.get()[6])));
        case 37: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(66), float(self->field_root_15_empty_57_layout_cache.get()[1]), float(self->field_root_15_empty_57_layout_cache.get()[0]), float(0)));
        case 38: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(66), float(self->field_root_15_empty_57_layout_cache.get()[3]), float(self->field_root_15_empty_57_layout_cache.get()[2]), float(0)));
        case 39: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(std::max<float>(66, std::max<float>(32, self->field_button_62.field_root_3_i_layout_6_layoutinfo_v.get().min))), float(self->field_root_15_empty_57_layout_cache.get()[5]), float(self->field_root_15_empty_57_layout_cache.get()[4]), float(0)));
        case 40: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(std::max<float>(66, std::max<float>(32, self->field_button_63.field_root_3_i_layout_6_layoutinfo_v.get().min))), float(self->field_root_15_empty_57_layout_cache.get()[7]), float(self->field_root_15_empty_57_layout_cache.get()[6]), float(0)));
        case 41: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(std::max<float>(66, std::max<float>(32, self->field_button_64.field_root_3_i_layout_6_layoutinfo_v.get().min))), float(self->field_root_15_empty_57_layout_cache.get()[9]), float(self->field_root_15_empty_57_layout_cache.get()[8]), float(0)));
        case 42: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_58_layout_cache.get()[1]), float(self->field_root_15_empty_57_layout_cache.get()[1]), float(0), float(self->field_root_15_empty_58_layout_cache.get()[0])));
        case 43: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_58_layout_cache.get()[3]), float(self->field_root_15_empty_57_layout_cache.get()[1]), float(0), float(self->field_root_15_empty_58_layout_cache.get()[2])));
        case 65: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(86), float(self->field_root_15_empty_65_layout_cache.get()[1]), float(self->field_root_15_empty_65_layout_cache.get()[0]), float(0)));
        case 66: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(86), float(self->field_root_15_empty_65_layout_cache.get()[3]), float(self->field_root_15_empty_65_layout_cache.get()[2]), float(0)));
        case 67: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(86), float(self->field_root_15_empty_65_layout_cache.get()[5]), float(self->field_root_15_empty_65_layout_cache.get()[4]), float(0)));
        case 68: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(86), float(self->field_root_15_empty_65_layout_cache.get()[7]), float(self->field_root_15_empty_65_layout_cache.get()[6]), float(0)));
        case 69: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_67_layout_cache.get()[1]), float(((self->field_root_15_empty_65_layout_cache.get()[1] -(float) 13) -(float) 13)), float(13), float(self->field_root_15_empty_67_layout_cache.get()[0])));
        case 70: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_67_layout_cache.get()[3]), float(((self->field_root_15_empty_65_layout_cache.get()[1] -(float) 13) -(float) 13)), float(13), float(self->field_root_15_empty_67_layout_cache.get()[2])));
        case 71: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_71_layout_cache.get()[1]), float(((self->field_root_15_empty_65_layout_cache.get()[3] -(float) 13) -(float) 13)), float(13), float(self->field_root_15_empty_71_layout_cache.get()[0])));
        case 72: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_71_layout_cache.get()[3]), float(((self->field_root_15_empty_65_layout_cache.get()[3] -(float) 13) -(float) 13)), float(13), float(self->field_root_15_empty_71_layout_cache.get()[2])));
        case 73: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_75_layout_cache.get()[1]), float(((self->field_root_15_empty_65_layout_cache.get()[5] -(float) 13) -(float) 13)), float(13), float(self->field_root_15_empty_75_layout_cache.get()[0])));
        case 74: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_75_layout_cache.get()[3]), float(((self->field_root_15_empty_65_layout_cache.get()[5] -(float) 13) -(float) 13)), float(13), float(self->field_root_15_empty_75_layout_cache.get()[2])));
        case 75: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_75_layout_cache.get()[3]), float(self->field_root_15_empty_77_layout_cache.get()[1]), float(self->field_root_15_empty_77_layout_cache.get()[0]), float(0)));
        case 76: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_75_layout_cache.get()[3]), float(self->field_root_15_empty_77_layout_cache.get()[3]), float(self->field_root_15_empty_77_layout_cache.get()[2]), float(0)));
        case 77: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_81_layout_cache.get()[1]), float(((self->field_root_15_empty_65_layout_cache.get()[7] -(float) 13) -(float) 13)), float(13), float(self->field_root_15_empty_81_layout_cache.get()[0])));
        case 78: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_81_layout_cache.get()[3]), float(((self->field_root_15_empty_65_layout_cache.get()[7] -(float) 13) -(float) 13)), float(13), float(self->field_root_15_empty_81_layout_cache.get()[2])));
        case 79: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(312), float(self->field_root_15_empty_84_layout_cache.get()[1]), float(self->field_root_15_empty_84_layout_cache.get()[0]), float(0)));
        case 80: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(312), float(self->field_root_15_empty_84_layout_cache.get()[3]), float(self->field_root_15_empty_84_layout_cache.get()[2]), float(0)));
        case 81: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(30), float(((self->field_root_15_empty_84_layout_cache.get()[1] -(float) 16) -(float) 16)), float(16), float(self->field_root_15_empty_86_layout_cache.get()[0])));
        case 82: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(1), float(((self->field_root_15_empty_84_layout_cache.get()[1] -(float) 16) -(float) 16)), float(16), float(self->field_root_15_empty_86_layout_cache.get()[2])));
        case 83: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(26), float(((self->field_root_15_empty_84_layout_cache.get()[1] -(float) 16) -(float) 16)), float(16), float(self->field_root_15_empty_86_layout_cache.get()[4])));
        case 84: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(30), float(((self->field_root_15_empty_84_layout_cache.get()[1] -(float) 16) -(float) 16)), float(16), float(self->field_root_15_empty_86_layout_cache.get()[6])));
        case 85: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(((self->field_root_15_empty_84_layout_cache.get()[1] -(float) 16) -(float) 16)), float(16), float(self->field_root_15_empty_86_layout_cache.get()[8])));
        case 86: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(((self->field_root_15_empty_84_layout_cache.get()[1] -(float) 16) -(float) 16)), float(16), float(self->field_root_15_empty_86_layout_cache.get()[10])));
        case 87: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(((self->field_root_15_empty_84_layout_cache.get()[1] -(float) 16) -(float) 16)), float(16), float(self->field_root_15_empty_86_layout_cache.get()[12])));
        case 88: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(((self->field_root_15_empty_84_layout_cache.get()[1] -(float) 16) -(float) 16)), float(16), float(self->field_root_15_empty_86_layout_cache.get()[14])));
        case 89: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(((self->field_root_15_empty_84_layout_cache.get()[1] -(float) 16) -(float) 16)), float(16), float(self->field_root_15_empty_86_layout_cache.get()[16])));
        case 90: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(((self->field_root_15_empty_84_layout_cache.get()[1] -(float) 16) -(float) 16)), float(16), float(self->field_root_15_empty_86_layout_cache.get()[18])));
        case 91: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_86_layout_cache.get()[21]), float(((self->field_root_15_empty_84_layout_cache.get()[1] -(float) 16) -(float) 16)), float(16), float(self->field_root_15_empty_86_layout_cache.get()[20])));
        case 92: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(24), float(((self->field_root_15_empty_84_layout_cache.get()[1] -(float) 16) -(float) 16)), float(16), float(self->field_root_15_empty_86_layout_cache.get()[22])));
        case 93: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(30), float(self->field_root_15_empty_87_layout_cache.get()[1]), float(self->field_root_15_empty_87_layout_cache.get()[0]), float(0)));
        case 94: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(30), float(self->field_root_15_empty_87_layout_cache.get()[3]), float(self->field_root_15_empty_87_layout_cache.get()[2]), float(0)));
        case 95: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(30), float(self->field_root_15_empty_87_layout_cache.get()[5]), float(self->field_root_15_empty_87_layout_cache.get()[4]), float(0)));
        case 96: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(26), float(52), float(self->field_root_15_empty_92_layout_cache.get()[0]), float(0)));
        case 97: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(26), float(self->field_root_15_empty_92_layout_cache.get()[3]), float(self->field_root_15_empty_92_layout_cache.get()[2]), float(0)));
        case 98: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(26), float(84), float(self->field_root_15_empty_92_layout_cache.get()[4]), float(0)));
        case 99: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(22), float(3), float(self->field_root_15_empty_96_layout_cache.get()[0]), float(0)));
        case 100: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(30), float(49), float(self->field_root_15_empty_96_layout_cache.get()[2]), float(0)));
        case 101: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(30), float(self->field_root_15_empty_96_layout_cache.get()[5]), float(self->field_root_15_empty_96_layout_cache.get()[4]), float(0)));
        case 102: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(30), float(84), float(self->field_root_15_empty_96_layout_cache.get()[6]), float(0)));
        case 103: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(52), float(self->field_root_15_empty_101_layout_cache.get()[0]), float(0)));
        case 104: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(self->field_root_15_empty_101_layout_cache.get()[3]), float(self->field_root_15_empty_101_layout_cache.get()[2]), float(0)));
        case 105: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(84), float(self->field_root_15_empty_101_layout_cache.get()[4]), float(0)));
        case 106: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(52), float(self->field_root_15_empty_105_layout_cache.get()[0]), float(0)));
        case 107: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(self->field_root_15_empty_105_layout_cache.get()[3]), float(self->field_root_15_empty_105_layout_cache.get()[2]), float(0)));
        case 108: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(84), float(self->field_root_15_empty_105_layout_cache.get()[4]), float(0)));
        case 109: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(52), float(self->field_root_15_empty_109_layout_cache.get()[0]), float(0)));
        case 110: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(self->field_root_15_empty_109_layout_cache.get()[3]), float(self->field_root_15_empty_109_layout_cache.get()[2]), float(0)));
        case 111: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(84), float(self->field_root_15_empty_109_layout_cache.get()[4]), float(0)));
        case 112: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(52), float(self->field_root_15_empty_113_layout_cache.get()[0]), float(0)));
        case 113: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(self->field_root_15_empty_113_layout_cache.get()[3]), float(self->field_root_15_empty_113_layout_cache.get()[2]), float(0)));
        case 114: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(84), float(self->field_root_15_empty_113_layout_cache.get()[4]), float(0)));
        case 115: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(52), float(self->field_root_15_empty_117_layout_cache.get()[0]), float(0)));
        case 116: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(self->field_root_15_empty_117_layout_cache.get()[3]), float(self->field_root_15_empty_117_layout_cache.get()[2]), float(0)));
        case 117: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(84), float(self->field_root_15_empty_117_layout_cache.get()[4]), float(0)));
        case 118: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(52), float(self->field_root_15_empty_121_layout_cache.get()[0]), float(0)));
        case 119: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(self->field_root_15_empty_121_layout_cache.get()[3]), float(self->field_root_15_empty_121_layout_cache.get()[2]), float(0)));
        case 120: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(84), float(self->field_root_15_empty_121_layout_cache.get()[4]), float(0)));
        case 121: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(7), float(7), float(self->field_root_15_empty_126_layout_cache.get()[0]), float(0)));
        case 122: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(24), float(self->field_root_15_empty_126_layout_cache.get()[3]), float(self->field_root_15_empty_126_layout_cache.get()[2]), float(0)));
        case 123: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(24), float(self->field_root_15_empty_126_layout_cache.get()[5]), float(self->field_root_15_empty_126_layout_cache.get()[4]), float(0)));
        case 124: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(24), float(self->field_root_15_empty_126_layout_cache.get()[7]), float(self->field_root_15_empty_126_layout_cache.get()[6]), float(0)));
        case 125: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(30), float(((self->field_root_15_empty_84_layout_cache.get()[3] -(float) 16) -(float) 16)), float(16), float(self->field_root_15_empty_132_layout_cache.get()[0])));
        case 126: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(1), float(((self->field_root_15_empty_84_layout_cache.get()[3] -(float) 16) -(float) 16)), float(16), float(self->field_root_15_empty_132_layout_cache.get()[2])));
        case 127: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(42), float(((self->field_root_15_empty_84_layout_cache.get()[3] -(float) 16) -(float) 16)), float(16), float(self->field_root_15_empty_132_layout_cache.get()[4])));
        case 128: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(18), float(((self->field_root_15_empty_84_layout_cache.get()[3] -(float) 16) -(float) 16)), float(16), float(self->field_root_15_empty_132_layout_cache.get()[6])));
        case 129: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(31), float(((self->field_root_15_empty_84_layout_cache.get()[3] -(float) 16) -(float) 16)), float(16), float(self->field_root_15_empty_132_layout_cache.get()[8])));
        case 130: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(31), float(((self->field_root_15_empty_84_layout_cache.get()[3] -(float) 16) -(float) 16)), float(16), float(self->field_root_15_empty_132_layout_cache.get()[10])));
        case 131: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(31), float(((self->field_root_15_empty_84_layout_cache.get()[3] -(float) 16) -(float) 16)), float(16), float(self->field_root_15_empty_132_layout_cache.get()[12])));
        case 132: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(31), float(((self->field_root_15_empty_84_layout_cache.get()[3] -(float) 16) -(float) 16)), float(16), float(self->field_root_15_empty_132_layout_cache.get()[14])));
        case 133: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(30), float(self->field_root_15_empty_133_layout_cache.get()[1]), float(self->field_root_15_empty_133_layout_cache.get()[0]), float(0)));
        case 134: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(30), float(self->field_root_15_empty_133_layout_cache.get()[3]), float(self->field_root_15_empty_133_layout_cache.get()[2]), float(0)));
        case 135: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(30), float(self->field_root_15_empty_133_layout_cache.get()[5]), float(self->field_root_15_empty_133_layout_cache.get()[4]), float(0)));
        case 136: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(42), float(self->field_root_15_empty_138_layout_cache.get()[1]), float(self->field_root_15_empty_138_layout_cache.get()[0]), float(0)));
        case 137: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(42), float(8), float(self->field_root_15_empty_138_layout_cache.get()[2]), float(0)));
        case 138: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(42), float(self->field_root_15_empty_138_layout_cache.get()[5]), float(self->field_root_15_empty_138_layout_cache.get()[4]), float(0)));
        case 139: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_140_layout_cache.get()[1]), float(((self->field_root_15_empty_138_layout_cache.get()[1] -(float) 6) -(float) 6)), float(6), float(self->field_root_15_empty_140_layout_cache.get()[0])));
        case 140: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_140_layout_cache.get()[3]), float(((self->field_root_15_empty_138_layout_cache.get()[1] -(float) 6) -(float) 6)), float(6), float(self->field_root_15_empty_140_layout_cache.get()[2])));
        case 141: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_145_layout_cache.get()[1]), float(((self->field_root_15_empty_138_layout_cache.get()[5] -(float) 6) -(float) 6)), float(6), float(self->field_root_15_empty_145_layout_cache.get()[0])));
        case 142: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_145_layout_cache.get()[3]), float(((self->field_root_15_empty_138_layout_cache.get()[5] -(float) 6) -(float) 6)), float(6), float(self->field_root_15_empty_145_layout_cache.get()[2])));
        case 143: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(31), float(44), float(self->field_root_15_empty_149_layout_cache.get()[0]), float(0)));
        case 144: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(31), float(8), float(self->field_root_15_empty_149_layout_cache.get()[2]), float(0)));
        case 145: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(31), float(self->field_root_15_empty_149_layout_cache.get()[5]), float(self->field_root_15_empty_149_layout_cache.get()[4]), float(0)));
        case 146: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(31), float(self->field_root_15_empty_149_layout_cache.get()[7]), float(self->field_root_15_empty_149_layout_cache.get()[6]), float(0)));
        case 147: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_text_151.height.get()), float(self->field_text_151.width.get()), float(((44 -(float) self->field_text_151.width.get()) /(float) 2)), float(((31 -(float) self->field_text_151.height.get()) /(float) 2))));
        case 148: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(31), float(44), float(self->field_root_15_empty_155_layout_cache.get()[0]), float(0)));
        case 149: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(31), float(8), float(self->field_root_15_empty_155_layout_cache.get()[2]), float(0)));
        case 150: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(31), float(self->field_root_15_empty_155_layout_cache.get()[5]), float(self->field_root_15_empty_155_layout_cache.get()[4]), float(0)));
        case 151: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(31), float(self->field_root_15_empty_155_layout_cache.get()[7]), float(self->field_root_15_empty_155_layout_cache.get()[6]), float(0)));
        case 152: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_text_157.height.get()), float(self->field_text_157.width.get()), float(((44 -(float) self->field_text_157.width.get()) /(float) 2)), float(((31 -(float) self->field_text_157.height.get()) /(float) 2))));
        case 153: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(31), float(44), float(self->field_root_15_empty_161_layout_cache.get()[0]), float(0)));
        case 154: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(31), float(8), float(self->field_root_15_empty_161_layout_cache.get()[2]), float(0)));
        case 155: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(31), float(self->field_root_15_empty_161_layout_cache.get()[5]), float(self->field_root_15_empty_161_layout_cache.get()[4]), float(0)));
        case 156: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(31), float(self->field_root_15_empty_161_layout_cache.get()[7]), float(self->field_root_15_empty_161_layout_cache.get()[6]), float(0)));
        case 157: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_text_163.height.get()), float(self->field_text_163.width.get()), float(((44 -(float) self->field_text_163.width.get()) /(float) 2)), float(((31 -(float) self->field_text_163.height.get()) /(float) 2))));
        case 158: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(31), float(44), float(self->field_root_15_empty_167_layout_cache.get()[0]), float(0)));
        case 159: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(31), float(8), float(self->field_root_15_empty_167_layout_cache.get()[2]), float(0)));
        case 160: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(31), float(self->field_root_15_empty_167_layout_cache.get()[5]), float(self->field_root_15_empty_167_layout_cache.get()[4]), float(0)));
        case 161: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(31), float(self->field_root_15_empty_167_layout_cache.get()[7]), float(self->field_root_15_empty_167_layout_cache.get()[6]), float(0)));
        case 162: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_text_169.height.get()), float(self->field_text_169.width.get()), float(((44 -(float) self->field_text_169.width.get()) /(float) 2)), float(((31 -(float) self->field_text_169.height.get()) /(float) 2))));
        case 163: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_56_layout_cache.get()[7]), float(self->field_root_15_empty_173_layout_cache.get()[1]), float(self->field_root_15_empty_173_layout_cache.get()[0]), float(0)));
        case 164: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_56_layout_cache.get()[7]), float(self->field_root_15_empty_173_layout_cache.get()[3]), float(self->field_root_15_empty_173_layout_cache.get()[2]), float(0)));
        case 165: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(((self->field_root_15_empty_173_layout_cache.get()[1] -(float) 16) -(float) 16)), float(16), float(self->field_root_15_empty_175_layout_cache.get()[0])));
        case 166: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_175_layout_cache.get()[3]), float(((self->field_root_15_empty_173_layout_cache.get()[1] -(float) 16) -(float) 16)), float(16), float(self->field_root_15_empty_175_layout_cache.get()[2])));
        case 167: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(self->field_root_15_empty_176_layout_cache.get()[1]), float(self->field_root_15_empty_176_layout_cache.get()[0]), float(0)));
        case 168: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(self->field_root_15_empty_176_layout_cache.get()[3]), float(self->field_root_15_empty_176_layout_cache.get()[2]), float(0)));
        case 169: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(self->field_root_15_empty_176_layout_cache.get()[5]), float(self->field_root_15_empty_176_layout_cache.get()[4]), float(0)));
        case 170: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_175_layout_cache.get()[3]), float(self->field_root_15_empty_180_layout_cache.get()[1]), float(self->field_root_15_empty_180_layout_cache.get()[0]), float(0)));
        case 171: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_175_layout_cache.get()[3]), float(self->field_root_15_empty_180_layout_cache.get()[3]), float(self->field_root_15_empty_180_layout_cache.get()[2]), float(0)));
        case 172: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_175_layout_cache.get()[3]), float(self->field_root_15_empty_180_layout_cache.get()[5]), float(self->field_root_15_empty_180_layout_cache.get()[4]), float(0)));
        case 173: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_175_layout_cache.get()[3]), float(self->field_root_15_empty_180_layout_cache.get()[7]), float(self->field_root_15_empty_180_layout_cache.get()[6]), float(0)));
        case 174: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_175_layout_cache.get()[3]), float(self->field_root_15_empty_180_layout_cache.get()[9]), float(self->field_root_15_empty_180_layout_cache.get()[8]), float(0)));
        case 175: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_175_layout_cache.get()[3]), float(self->field_root_15_empty_180_layout_cache.get()[11]), float(self->field_root_15_empty_180_layout_cache.get()[10]), float(0)));
        case 176: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_175_layout_cache.get()[3]), float(self->field_root_15_empty_180_layout_cache.get()[13]), float(self->field_root_15_empty_180_layout_cache.get()[12]), float(0)));
        case 177: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_175_layout_cache.get()[3]), float(self->field_root_15_empty_180_layout_cache.get()[15]), float(self->field_root_15_empty_180_layout_cache.get()[14]), float(0)));
        case 178: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_182_layout_cache.get()[1]), float(((self->field_root_15_empty_180_layout_cache.get()[1] -(float) 8) -(float) 8)), float(8), float(self->field_root_15_empty_182_layout_cache.get()[0])));
        case 179: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_182_layout_cache.get()[3]), float(((self->field_root_15_empty_180_layout_cache.get()[1] -(float) 8) -(float) 8)), float(8), float(self->field_root_15_empty_182_layout_cache.get()[2])));
        case 180: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_186_layout_cache.get()[1]), float(((self->field_root_15_empty_180_layout_cache.get()[3] -(float) 8) -(float) 8)), float(8), float(self->field_root_15_empty_186_layout_cache.get()[0])));
        case 181: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_186_layout_cache.get()[3]), float(((self->field_root_15_empty_180_layout_cache.get()[3] -(float) 8) -(float) 8)), float(8), float(self->field_root_15_empty_186_layout_cache.get()[2])));
        case 182: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_190_layout_cache.get()[1]), float(((self->field_root_15_empty_180_layout_cache.get()[5] -(float) 8) -(float) 8)), float(8), float(self->field_root_15_empty_190_layout_cache.get()[0])));
        case 183: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_190_layout_cache.get()[3]), float(((self->field_root_15_empty_180_layout_cache.get()[5] -(float) 8) -(float) 8)), float(8), float(self->field_root_15_empty_190_layout_cache.get()[2])));
        case 184: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_194_layout_cache.get()[1]), float(((self->field_root_15_empty_180_layout_cache.get()[7] -(float) 8) -(float) 8)), float(8), float(self->field_root_15_empty_194_layout_cache.get()[0])));
        case 185: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_194_layout_cache.get()[3]), float(((self->field_root_15_empty_180_layout_cache.get()[7] -(float) 8) -(float) 8)), float(8), float(self->field_root_15_empty_194_layout_cache.get()[2])));
        case 186: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_198_layout_cache.get()[1]), float(((self->field_root_15_empty_180_layout_cache.get()[9] -(float) 8) -(float) 8)), float(8), float(self->field_root_15_empty_198_layout_cache.get()[0])));
        case 187: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_198_layout_cache.get()[3]), float(((self->field_root_15_empty_180_layout_cache.get()[9] -(float) 8) -(float) 8)), float(8), float(self->field_root_15_empty_198_layout_cache.get()[2])));
        case 188: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_202_layout_cache.get()[1]), float(((self->field_root_15_empty_180_layout_cache.get()[11] -(float) 8) -(float) 8)), float(8), float(self->field_root_15_empty_202_layout_cache.get()[0])));
        case 189: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_202_layout_cache.get()[3]), float(((self->field_root_15_empty_180_layout_cache.get()[11] -(float) 8) -(float) 8)), float(8), float(self->field_root_15_empty_202_layout_cache.get()[2])));
        case 190: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_206_layout_cache.get()[1]), float(((self->field_root_15_empty_180_layout_cache.get()[13] -(float) 8) -(float) 8)), float(8), float(self->field_root_15_empty_206_layout_cache.get()[0])));
        case 191: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_206_layout_cache.get()[3]), float(((self->field_root_15_empty_180_layout_cache.get()[13] -(float) 8) -(float) 8)), float(8), float(self->field_root_15_empty_206_layout_cache.get()[2])));
        case 192: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_210_layout_cache.get()[1]), float(((self->field_root_15_empty_180_layout_cache.get()[15] -(float) 8) -(float) 8)), float(8), float(self->field_root_15_empty_210_layout_cache.get()[0])));
        case 193: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_210_layout_cache.get()[3]), float(((self->field_root_15_empty_180_layout_cache.get()[15] -(float) 8) -(float) 8)), float(8), float(self->field_root_15_empty_210_layout_cache.get()[2])));
        case 194: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(((self->field_root_15_empty_173_layout_cache.get()[3] -(float) 16) -(float) 16)), float(16), float(self->field_root_15_empty_214_layout_cache.get()[0])));
        case 195: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(22), float(((self->field_root_15_empty_173_layout_cache.get()[3] -(float) 16) -(float) 16)), float(16), float(self->field_root_15_empty_214_layout_cache.get()[2])));
        case 196: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(22), float(((self->field_root_15_empty_173_layout_cache.get()[3] -(float) 16) -(float) 16)), float(16), float(self->field_root_15_empty_214_layout_cache.get()[4])));
        case 197: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_214_layout_cache.get()[7]), float(((self->field_root_15_empty_173_layout_cache.get()[3] -(float) 16) -(float) 16)), float(16), float(self->field_root_15_empty_214_layout_cache.get()[6])));
        case 198: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(32), float(((self->field_root_15_empty_173_layout_cache.get()[3] -(float) 16) -(float) 16)), float(16), float(self->field_root_15_empty_214_layout_cache.get()[8])));
        case 199: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(self->field_root_15_empty_215_layout_cache.get()[1]), float(self->field_root_15_empty_215_layout_cache.get()[0]), float(0)));
        case 200: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(self->field_root_15_empty_215_layout_cache.get()[3]), float(self->field_root_15_empty_215_layout_cache.get()[2]), float(0)));
        case 201: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(self->field_root_15_empty_215_layout_cache.get()[5]), float(self->field_root_15_empty_215_layout_cache.get()[4]), float(0)));
        case 202: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(28), float(self->field_root_15_empty_215_layout_cache.get()[7]), float(self->field_root_15_empty_215_layout_cache.get()[6]), float(0)));
        case 203: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(22), float(82), float(self->field_root_15_empty_220_layout_cache.get()[0]), float(0)));
        case 204: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(22), float(self->field_root_15_empty_220_layout_cache.get()[3]), float(self->field_root_15_empty_220_layout_cache.get()[2]), float(0)));
        case 205: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(22), float(34), float(self->field_root_15_empty_220_layout_cache.get()[4]), float(0)));
        case 206: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(7), float(self->field_root_15_empty_220_layout_cache.get()[3]), float(0), float(7.5)));
        case 207: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(7), float((0.72 * self->field_root_15_empty_220_layout_cache.get()[3])), float(self->field_root_15_rectangle_224_x.get()), float(0)));
        case 208: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(22), float(82), float(self->field_root_15_empty_226_layout_cache.get()[0]), float(0)));
        case 209: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(22), float(self->field_root_15_empty_226_layout_cache.get()[3]), float(self->field_root_15_empty_226_layout_cache.get()[2]), float(0)));
        case 210: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(22), float(34), float(self->field_root_15_empty_226_layout_cache.get()[4]), float(0)));
        case 211: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(7), float(self->field_root_15_empty_226_layout_cache.get()[3]), float(0), float(7.5)));
        case 212: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(7), float((0.48 * self->field_root_15_empty_226_layout_cache.get()[3])), float(self->field_root_15_rectangle_230_x.get()), float(0)));
        case 213: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(32), float(self->field_root_15_empty_233_layout_cache.get()[1]), float(self->field_root_15_empty_233_layout_cache.get()[0]), float(0)));
        case 214: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(32), float(6), float(self->field_root_15_empty_233_layout_cache.get()[2]), float(0)));
        case 215: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(32), float(self->field_root_15_empty_233_layout_cache.get()[5]), float(self->field_root_15_empty_233_layout_cache.get()[4]), float(0)));
        case 216: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(32), float(6), float(self->field_root_15_empty_233_layout_cache.get()[6]), float(0)));
        case 217: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(32), float(self->field_root_15_empty_233_layout_cache.get()[9]), float(self->field_root_15_empty_233_layout_cache.get()[8]), float(0)));
        case 218: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_235_layout_cache.get()[1]), float(((self->field_root_15_empty_233_layout_cache.get()[1] -(float) 5) -(float) 5)), float(5), float(self->field_root_15_empty_235_layout_cache.get()[0])));
        case 219: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_235_layout_cache.get()[3]), float(((self->field_root_15_empty_233_layout_cache.get()[1] -(float) 5) -(float) 5)), float(5), float(self->field_root_15_empty_235_layout_cache.get()[2])));
        case 220: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_240_layout_cache.get()[1]), float(((self->field_root_15_empty_233_layout_cache.get()[5] -(float) 5) -(float) 5)), float(5), float(self->field_root_15_empty_240_layout_cache.get()[0])));
        case 221: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_240_layout_cache.get()[3]), float(((self->field_root_15_empty_233_layout_cache.get()[5] -(float) 5) -(float) 5)), float(5), float(self->field_root_15_empty_240_layout_cache.get()[2])));
        case 222: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_245_layout_cache.get()[1]), float(((self->field_root_15_empty_233_layout_cache.get()[9] -(float) 5) -(float) 5)), float(5), float(self->field_root_15_empty_245_layout_cache.get()[0])));
        case 223: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_245_layout_cache.get()[3]), float(((self->field_root_15_empty_233_layout_cache.get()[9] -(float) 5) -(float) 5)), float(5), float(self->field_root_15_empty_245_layout_cache.get()[2])));
    }
    if (index == 39) {
        return self->field_button_62.item_geometry(0);
    } else if (index >= 44 && index < 51) {
        return self->field_button_62.item_geometry(index - 43);
    } else if (index == 40) {
        return self->field_button_63.item_geometry(0);
    } else if (index >= 51 && index < 58) {
        return self->field_button_63.item_geometry(index - 50);
    } else if (index == 41) {
        return self->field_button_64.item_geometry(0);
    } else if (index >= 58 && index < 65) {
        return self->field_button_64.item_geometry(index - 57);
    } else return {};
}

auto MainWindow::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 4: return slint::cbindgen_private::AccessibleRole::Text;
        case 6: return slint::cbindgen_private::AccessibleRole::Text;
        case 9: return slint::cbindgen_private::AccessibleRole::Text;
        case 10: return slint::cbindgen_private::AccessibleRole::Text;
        case 11: return slint::cbindgen_private::AccessibleRole::Text;
        case 14: return slint::cbindgen_private::AccessibleRole::Text;
        case 21: return slint::cbindgen_private::AccessibleRole::Text;
        case 23: return slint::cbindgen_private::AccessibleRole::Text;
        case 24: return slint::cbindgen_private::AccessibleRole::Text;
        case 25: return slint::cbindgen_private::AccessibleRole::Text;
        case 26: return slint::cbindgen_private::AccessibleRole::Text;
        case 27: return slint::cbindgen_private::AccessibleRole::Text;
        case 28: return slint::cbindgen_private::AccessibleRole::Text;
        case 29: return slint::cbindgen_private::AccessibleRole::Text;
        case 30: return slint::cbindgen_private::AccessibleRole::Text;
        case 31: return slint::cbindgen_private::AccessibleRole::Text;
        case 32: return slint::cbindgen_private::AccessibleRole::Text;
        case 39: return slint::cbindgen_private::AccessibleRole::Button;
        case 40: return slint::cbindgen_private::AccessibleRole::Button;
        case 41: return slint::cbindgen_private::AccessibleRole::Button;
        case 42: return slint::cbindgen_private::AccessibleRole::Text;
        case 43: return slint::cbindgen_private::AccessibleRole::Text;
        case 69: return slint::cbindgen_private::AccessibleRole::Text;
        case 70: return slint::cbindgen_private::AccessibleRole::Text;
        case 71: return slint::cbindgen_private::AccessibleRole::Text;
        case 72: return slint::cbindgen_private::AccessibleRole::Text;
        case 73: return slint::cbindgen_private::AccessibleRole::Text;
        case 75: return slint::cbindgen_private::AccessibleRole::Text;
        case 76: return slint::cbindgen_private::AccessibleRole::Text;
        case 77: return slint::cbindgen_private::AccessibleRole::Text;
        case 78: return slint::cbindgen_private::AccessibleRole::Text;
        case 93: return slint::cbindgen_private::AccessibleRole::Text;
        case 95: return slint::cbindgen_private::AccessibleRole::Text;
        case 96: return slint::cbindgen_private::AccessibleRole::Text;
        case 97: return slint::cbindgen_private::AccessibleRole::Text;
        case 98: return slint::cbindgen_private::AccessibleRole::Text;
        case 100: return slint::cbindgen_private::AccessibleRole::Text;
        case 101: return slint::cbindgen_private::AccessibleRole::Text;
        case 102: return slint::cbindgen_private::AccessibleRole::Text;
        case 103: return slint::cbindgen_private::AccessibleRole::Text;
        case 104: return slint::cbindgen_private::AccessibleRole::Text;
        case 105: return slint::cbindgen_private::AccessibleRole::Text;
        case 106: return slint::cbindgen_private::AccessibleRole::Text;
        case 107: return slint::cbindgen_private::AccessibleRole::Text;
        case 108: return slint::cbindgen_private::AccessibleRole::Text;
        case 109: return slint::cbindgen_private::AccessibleRole::Text;
        case 110: return slint::cbindgen_private::AccessibleRole::Text;
        case 111: return slint::cbindgen_private::AccessibleRole::Text;
        case 112: return slint::cbindgen_private::AccessibleRole::Text;
        case 113: return slint::cbindgen_private::AccessibleRole::Text;
        case 114: return slint::cbindgen_private::AccessibleRole::Text;
        case 115: return slint::cbindgen_private::AccessibleRole::Text;
        case 116: return slint::cbindgen_private::AccessibleRole::Text;
        case 117: return slint::cbindgen_private::AccessibleRole::Text;
        case 118: return slint::cbindgen_private::AccessibleRole::Text;
        case 119: return slint::cbindgen_private::AccessibleRole::Text;
        case 120: return slint::cbindgen_private::AccessibleRole::Text;
        case 122: return slint::cbindgen_private::AccessibleRole::Text;
        case 124: return slint::cbindgen_private::AccessibleRole::Text;
        case 128: return slint::cbindgen_private::AccessibleRole::Text;
        case 133: return slint::cbindgen_private::AccessibleRole::Text;
        case 135: return slint::cbindgen_private::AccessibleRole::Text;
        case 139: return slint::cbindgen_private::AccessibleRole::Text;
        case 140: return slint::cbindgen_private::AccessibleRole::Text;
        case 141: return slint::cbindgen_private::AccessibleRole::Text;
        case 142: return slint::cbindgen_private::AccessibleRole::Text;
        case 145: return slint::cbindgen_private::AccessibleRole::Text;
        case 146: return slint::cbindgen_private::AccessibleRole::Text;
        case 147: return slint::cbindgen_private::AccessibleRole::Text;
        case 150: return slint::cbindgen_private::AccessibleRole::Text;
        case 151: return slint::cbindgen_private::AccessibleRole::Text;
        case 152: return slint::cbindgen_private::AccessibleRole::Text;
        case 155: return slint::cbindgen_private::AccessibleRole::Text;
        case 156: return slint::cbindgen_private::AccessibleRole::Text;
        case 157: return slint::cbindgen_private::AccessibleRole::Text;
        case 160: return slint::cbindgen_private::AccessibleRole::Text;
        case 161: return slint::cbindgen_private::AccessibleRole::Text;
        case 162: return slint::cbindgen_private::AccessibleRole::Text;
        case 167: return slint::cbindgen_private::AccessibleRole::Text;
        case 169: return slint::cbindgen_private::AccessibleRole::Text;
        case 178: return slint::cbindgen_private::AccessibleRole::Text;
        case 179: return slint::cbindgen_private::AccessibleRole::Text;
        case 180: return slint::cbindgen_private::AccessibleRole::Text;
        case 181: return slint::cbindgen_private::AccessibleRole::Text;
        case 182: return slint::cbindgen_private::AccessibleRole::Text;
        case 183: return slint::cbindgen_private::AccessibleRole::Text;
        case 184: return slint::cbindgen_private::AccessibleRole::Text;
        case 185: return slint::cbindgen_private::AccessibleRole::Text;
        case 186: return slint::cbindgen_private::AccessibleRole::Text;
        case 187: return slint::cbindgen_private::AccessibleRole::Text;
        case 188: return slint::cbindgen_private::AccessibleRole::Text;
        case 189: return slint::cbindgen_private::AccessibleRole::Text;
        case 190: return slint::cbindgen_private::AccessibleRole::Text;
        case 191: return slint::cbindgen_private::AccessibleRole::Text;
        case 192: return slint::cbindgen_private::AccessibleRole::Text;
        case 193: return slint::cbindgen_private::AccessibleRole::Text;
        case 199: return slint::cbindgen_private::AccessibleRole::Text;
        case 201: return slint::cbindgen_private::AccessibleRole::Text;
        case 202: return slint::cbindgen_private::AccessibleRole::Text;
        case 203: return slint::cbindgen_private::AccessibleRole::Text;
        case 205: return slint::cbindgen_private::AccessibleRole::Text;
        case 208: return slint::cbindgen_private::AccessibleRole::Text;
        case 210: return slint::cbindgen_private::AccessibleRole::Text;
        case 218: return slint::cbindgen_private::AccessibleRole::Text;
        case 219: return slint::cbindgen_private::AccessibleRole::Text;
        case 220: return slint::cbindgen_private::AccessibleRole::Text;
        case 221: return slint::cbindgen_private::AccessibleRole::Text;
        case 222: return slint::cbindgen_private::AccessibleRole::Text;
        case 223: return slint::cbindgen_private::AccessibleRole::Text;
    }
    if (index == 39) {
        return self->field_button_62.accessible_role(0);
    } else if (index >= 44 && index < 51) {
        return self->field_button_62.accessible_role(index - 43);
    } else if (index == 40) {
        return self->field_button_63.accessible_role(0);
    } else if (index >= 51 && index < 58) {
        return self->field_button_63.accessible_role(index - 50);
    } else if (index == 41) {
        return self->field_button_64.accessible_role(0);
    } else if (index >= 58 && index < 65) {
        return self->field_button_64.accessible_role(index - 57);
    } else return {};
}

auto MainWindow::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
        case (4 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"Test");
        case (6 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"PROCESSOR SIMULATOR");
        case (9 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"v0.1");
        case (10 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"M");
        case (11 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"\U000025cf  PREVIEW");
        case (14 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"WORKSPACE");
        case (21 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"ACTIVE WORKLOAD");
        case (23 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"\U000025a6");
        case (24 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"Overview");
        case (25 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"\U00002261");
        case (26 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"Instruction trace");
        case (27 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"\U000025a4");
        case (28 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"Memory map");
        case (29 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"\U000025a5");
        case (30 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"Cache lab");
        case (31 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"dot_product");
        case (32 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"1 task \U000000b7 1 core");
        case (39 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Checkable): return (false ? slint::SharedString(u8"true") : slint::SharedString(u8"false"));
        case (39 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Checked): return (self->field_button_62.field_root_3_checked.get() ? slint::SharedString(u8"true") : slint::SharedString(u8"false"));
        case (39 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Enabled): return (self->field_button_62.field_i_focus_scope_12.enabled.get() ? slint::SharedString(u8"true") : slint::SharedString(u8"false"));
        case (39 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->field_button_62.field_root_3_text.get();
        case (40 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Checkable): return (false ? slint::SharedString(u8"true") : slint::SharedString(u8"false"));
        case (40 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Checked): return (self->field_button_63.field_root_3_checked.get() ? slint::SharedString(u8"true") : slint::SharedString(u8"false"));
        case (40 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Enabled): return (self->field_button_63.field_i_focus_scope_12.enabled.get() ? slint::SharedString(u8"true") : slint::SharedString(u8"false"));
        case (40 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->field_button_63.field_root_3_text.get();
        case (41 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Checkable): return (false ? slint::SharedString(u8"true") : slint::SharedString(u8"false"));
        case (41 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Checked): return (self->field_button_64.field_root_3_checked.get() ? slint::SharedString(u8"true") : slint::SharedString(u8"false"));
        case (41 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Enabled): return (self->field_button_64.field_i_focus_scope_12.enabled.get() ? slint::SharedString(u8"true") : slint::SharedString(u8"false"));
        case (41 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->field_button_64.field_root_3_text.get();
        case (42 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"Simulation overview");
        case (43 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"Runtime state \U000000b7 dot_product \U000000b7 core 0");
        case (69 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"SIMULATOR CYCLES");
        case (70 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString::from_number(self->field_root_15_cycle_count.get());
        case (71 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"INSTRUCTIONS");
        case (72 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString::from_number(self->field_root_15_executed_count.get());
        case (73 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"ACTIVE CORES");
        case (75 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"1");
        case (76 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"of 1");
        case (77 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"TASK STATUS");
        case (78 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->field_root_15_task_status.get();
        case (93 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"INSTRUCTION TRACE");
        case (95 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"15 instructions");
        case (96 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"PC");
        case (97 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"INSTRUCTION");
        case (98 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"OPERATION");
        case (100 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString::from_number(self->field_root_15_pc_value.get());
        case (101 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->field_root_15_current_instruction.get();
        case (102 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"multiply");
        case (103 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"06");
        case (104 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"ADD  R3, R3, R4");
        case (105 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"addition");
        case (106 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"07");
        case (107 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"ADD  R0, R0, R7");
        case (108 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"addition");
        case (109 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"08");
        case (110 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"ADD  R1, R1, R7");
        case (111 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"addition");
        case (112 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"09");
        case (113 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"ADD  R2, R2, R7");
        case (114 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"addition");
        case (115 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"10");
        case (116 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"CMP  R2, R6");
        case (117 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"compare");
        case (118 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"11");
        case (119 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"JIF  00, LESS");
        case (120 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"branch");
        case (122 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"CURRENT INSTRUCTION");
        case (124 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"NEXT: ADD R3, R3, R4");
        case (128 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"REGISTERS");
        case (133 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"CORE 0");
        case (135 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->field_text_136.text.get();
        case (139 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"PROGRAM COUNTER");
        case (140 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString::from_number(self->field_root_15_pc_value.get());
        case (141 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"COMPARE FLAG");
        case (142 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->field_root_15_compare_flag.get();
        case (145 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString::from_number(self->field_root_15_reg0.get());
        case (146 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->field_root_15_reg0_hex.get();
        case (147 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"R0");
        case (150 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString::from_number(self->field_root_15_reg1.get());
        case (151 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->field_root_15_reg1_hex.get();
        case (152 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"R1");
        case (155 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString::from_number(self->field_root_15_reg2.get());
        case (156 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->field_root_15_reg2_hex.get();
        case (157 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"R2");
        case (160 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString::from_number(self->field_root_15_reg3.get());
        case (161 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->field_root_15_reg3_hex.get();
        case (162 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"R3");
        case (167 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"MEMORY WINDOW");
        case (169 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"ADDRESS  0x0064 \U00002014 0x006B");
        case (178 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"0064");
        case (179 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"1");
        case (180 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"0065");
        case (181 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"2");
        case (182 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"0066");
        case (183 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"3");
        case (184 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"0067");
        case (185 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"4");
        case (186 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"0068");
        case (187 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString::from_number(self->field_root_15_memory_word_4.get());
        case (188 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"0069");
        case (189 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"6");
        case (190 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"006A");
        case (191 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"7");
        case (192 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"006B");
        case (193 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"8");
        case (199 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"CACHE ACTIVITY");
        case (201 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"HIT RATE");
        case (202 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->field_root_15_l1_rate.get();
        case (203 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"L1  \U000000b7  4-way");
        case (205 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"72%");
        case (208 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"L2  \U000000b7  8-way");
        case (210 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"48%");
        case (218 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"HITS");
        case (219 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString::from_number(self->field_root_15_l1_hits.get());
        case (220 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"MISSES");
        case (221 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString::from_number(self->field_root_15_l1_misses.get());
        case (222 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"EVICTIONS");
        case (223 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString::from_number(self->field_root_15_l1_evictions.get());
    }
    if (index == 39) {
        return self->field_button_62.accessible_string_property(0, what);
    } else if (index >= 44 && index < 51) {
        return self->field_button_62.accessible_string_property(index - 43, what);
    } else if (index == 40) {
        return self->field_button_63.accessible_string_property(0, what);
    } else if (index >= 51 && index < 58) {
        return self->field_button_63.accessible_string_property(index - 50, what);
    } else if (index == 41) {
        return self->field_button_64.accessible_string_property(0, what);
    } else if (index >= 58 && index < 65) {
        return self->field_button_64.accessible_string_property(index - 57, what);
    } else return {};
}

auto MainWindow::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
        case (39 << 8) | uintptr_t(slint::cbindgen_private::AccessibilityAction::Tag::Default): return self->field_button_62.field_root_3_accessible_action_default.call();
        case (40 << 8) | uintptr_t(slint::cbindgen_private::AccessibilityAction::Tag::Default): return self->field_button_63.field_root_3_accessible_action_default.call();
        case (41 << 8) | uintptr_t(slint::cbindgen_private::AccessibilityAction::Tag::Default): return self->field_button_64.field_root_3_accessible_action_default.call();
    }
    if (index == 39) {
        return self->field_button_62.accessibility_action(0, action);
    } else if (index >= 44 && index < 51) {
        return self->field_button_62.accessibility_action(index - 43, action);
    } else if (index == 40) {
        return self->field_button_63.accessibility_action(0, action);
    } else if (index >= 51 && index < 58) {
        return self->field_button_63.accessibility_action(index - 50, action);
    } else if (index == 41) {
        return self->field_button_64.accessibility_action(0, action);
    } else if (index >= 58 && index < 65) {
        return self->field_button_64.accessibility_action(index - 57, action);
    } else return ;
}

auto MainWindow::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 39: return slint::cbindgen_private::SupportedAccessibilityAction_Default;
        case 40: return slint::cbindgen_private::SupportedAccessibilityAction_Default;
        case 41: return slint::cbindgen_private::SupportedAccessibilityAction_Default;
    }
    if (index == 39) {
        return self->field_button_62.supported_accessibility_actions(0);
    } else if (index >= 44 && index < 51) {
        return self->field_button_62.supported_accessibility_actions(index - 43);
    } else if (index == 40) {
        return self->field_button_63.supported_accessibility_actions(0);
    } else if (index >= 51 && index < 58) {
        return self->field_button_63.supported_accessibility_actions(index - 50);
    } else if (index == 41) {
        return self->field_button_64.supported_accessibility_actions(0);
    } else if (index >= 58 && index < 65) {
        return self->field_button_64.supported_accessibility_actions(index - 57);
    } else return {};
}

auto MainWindow::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 39) {
        return self->field_button_62.element_infos(0);
    } else if (index >= 44 && index < 51) {
        return self->field_button_62.element_infos(index - 43);
    } else if (index == 40) {
        return self->field_button_63.element_infos(0);
    } else if (index >= 51 && index < 58) {
        return self->field_button_63.element_infos(index - 50);
    } else if (index == 41) {
        return self->field_button_64.element_infos(0);
    } else if (index >= 58 && index < 65) {
        return self->field_button_64.element_infos(index - 57);
    } else return {};
}

auto MainWindow::ensure_instantiated () const -> bool{
    [[maybe_unused]] auto self = this;
    bool _changed = false;
    _changed |= self->field_button_62.ensure_instantiated();
    _changed |= self->field_button_63.ensure_instantiated();
    _changed |= self->field_button_64.ensure_instantiated();
    return _changed;
}

auto MainWindow::visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t{
        auto self = this;
        switch(dyn_index) { 
        case 0: case 1: case 2:  {
                        return self->field_button_62.visit_dynamic_children(dyn_index - 0, order, visitor);
                    }
        case 3: case 4: case 5:  {
                        return self->field_button_63.visit_dynamic_children(dyn_index - 3, order, visitor);
                    }
        case 6: case 7: case 8:  {
                        return self->field_button_64.visit_dynamic_children(dyn_index - 6, order, visitor);
                    } };
        std::abort();
}

auto MainWindow::subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: case 1: case 2:  {
                        return self->field_button_62.subtree_range(dyn_index - 0);
                    }
        case 3: case 4: case 5:  {
                        return self->field_button_63.subtree_range(dyn_index - 3);
                    }
        case 6: case 7: case 8:  {
                        return self->field_button_64.subtree_range(dyn_index - 6);
                    } };
        std::abort();
}

auto MainWindow::subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: case 1: case 2:  {
                        self->field_button_62.subtree_component(dyn_index - 0, subtree_index, result);
                        return;
                    }
        case 3: case 4: case 5:  {
                        self->field_button_63.subtree_component(dyn_index - 3, subtree_index, result);
                        return;
                    }
        case 6: case 7: case 8:  {
                        self->field_button_64.subtree_component(dyn_index - 6, subtree_index, result);
                        return;
                    } };
        std::abort();
}

auto MainWindow::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const MainWindow*>(base);
        return self->visit_dynamic_children(dyn_index, order, visitor);
    };
    auto self = reinterpret_cast<const MainWindow*>(component.instance);
    auto self_rc = self->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component), index, order, visitor, dyn_visit);
}

auto MainWindow::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

auto MainWindow::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
    auto self = reinterpret_cast<const MainWindow*>(component.instance);
    return self->subtree_range(dyn_index);
}

auto MainWindow::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
    auto self = reinterpret_cast<const MainWindow*>(component.instance);
    self->subtree_component(dyn_index, subtree_index, result);
}

auto MainWindow::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

auto MainWindow::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
}

auto MainWindow::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

auto MainWindow::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

auto MainWindow::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(2, 1, 0, 0, false), 
slint::private_api::make_item_node(7, 3, 0, 1, false), 
slint::private_api::make_item_node(2, 12, 0, 2, false), 
slint::private_api::make_item_node(1, 10, 1, 3, false), 
slint::private_api::make_item_node(0, 11, 1, 4, true), 
slint::private_api::make_item_node(0, 11, 1, 5, false), 
slint::private_api::make_item_node(0, 11, 1, 6, true), 
slint::private_api::make_item_node(0, 11, 1, 7, false), 
slint::private_api::make_item_node(1, 11, 1, 8, false), 
slint::private_api::make_item_node(0, 12, 1, 9, true), 
slint::private_api::make_item_node(0, 11, 3, 10, true), 
slint::private_api::make_item_node(0, 12, 8, 11, true), 
slint::private_api::make_item_node(9, 14, 2, 12, false), 
slint::private_api::make_item_node(4, 33, 2, 13, false), 
slint::private_api::make_item_node(0, 23, 12, 14, true), 
slint::private_api::make_item_node(2, 23, 12, 15, false), 
slint::private_api::make_item_node(2, 25, 12, 16, false), 
slint::private_api::make_item_node(2, 27, 12, 17, false), 
slint::private_api::make_item_node(2, 29, 12, 18, false), 
slint::private_api::make_item_node(0, 31, 12, 19, false), 
slint::private_api::make_item_node(0, 31, 12, 20, false), 
slint::private_api::make_item_node(0, 31, 12, 21, true), 
slint::private_api::make_item_node(2, 31, 12, 22, false), 
slint::private_api::make_item_node(0, 25, 15, 23, true), 
slint::private_api::make_item_node(0, 25, 15, 24, true), 
slint::private_api::make_item_node(0, 27, 16, 25, true), 
slint::private_api::make_item_node(0, 27, 16, 26, true), 
slint::private_api::make_item_node(0, 29, 17, 27, true), 
slint::private_api::make_item_node(0, 29, 17, 28, true), 
slint::private_api::make_item_node(0, 31, 18, 29, true), 
slint::private_api::make_item_node(0, 31, 18, 30, true), 
slint::private_api::make_item_node(0, 33, 22, 31, true), 
slint::private_api::make_item_node(0, 33, 22, 32, true), 
slint::private_api::make_item_node(5, 37, 13, 33, false), 
slint::private_api::make_item_node(4, 65, 13, 34, false), 
slint::private_api::make_item_node(2, 79, 13, 35, false), 
slint::private_api::make_item_node(2, 163, 13, 36, false), 
slint::private_api::make_item_node(2, 42, 33, 37, false), 
slint::private_api::make_item_node(0, 44, 33, 38, false), 
slint::private_api::make_item_node(4, 44, 33, 39, true), 
slint::private_api::make_item_node(4, 51, 33, 40, true), 
slint::private_api::make_item_node(4, 58, 33, 41, true), 
slint::private_api::make_item_node(0, 44, 37, 42, true), 
slint::private_api::make_item_node(0, 44, 37, 43, true), 
slint::private_api::make_item_node(3, 48, 39, 44, false), 
slint::private_api::make_item_node(0, 51, 39, 45, false), 
slint::private_api::make_item_node(0, 51, 39, 46, false), 
slint::private_api::make_dyn_node(2, 39), 
slint::private_api::make_item_node(0, 51, 44, 47, false), 
slint::private_api::make_dyn_node(0, 44), 
slint::private_api::make_dyn_node(1, 44), 
slint::private_api::make_item_node(3, 55, 40, 48, false), 
slint::private_api::make_item_node(0, 58, 40, 49, false), 
slint::private_api::make_item_node(0, 58, 40, 50, false), 
slint::private_api::make_dyn_node(5, 40), 
slint::private_api::make_item_node(0, 58, 51, 51, false), 
slint::private_api::make_dyn_node(3, 51), 
slint::private_api::make_dyn_node(4, 51), 
slint::private_api::make_item_node(3, 62, 41, 52, false), 
slint::private_api::make_item_node(0, 65, 41, 53, false), 
slint::private_api::make_item_node(0, 65, 41, 54, false), 
slint::private_api::make_dyn_node(8, 41), 
slint::private_api::make_item_node(0, 65, 58, 55, false), 
slint::private_api::make_dyn_node(6, 58), 
slint::private_api::make_dyn_node(7, 58), 
slint::private_api::make_item_node(2, 69, 34, 56, false), 
slint::private_api::make_item_node(2, 71, 34, 57, false), 
slint::private_api::make_item_node(2, 73, 34, 58, false), 
slint::private_api::make_item_node(2, 77, 34, 59, false), 
slint::private_api::make_item_node(0, 71, 65, 60, true), 
slint::private_api::make_item_node(0, 71, 65, 61, true), 
slint::private_api::make_item_node(0, 73, 66, 62, true), 
slint::private_api::make_item_node(0, 73, 66, 63, true), 
slint::private_api::make_item_node(0, 75, 67, 64, true), 
slint::private_api::make_item_node(2, 75, 67, 65, false), 
slint::private_api::make_item_node(0, 77, 74, 66, true), 
slint::private_api::make_item_node(0, 77, 74, 67, true), 
slint::private_api::make_item_node(0, 79, 68, 68, true), 
slint::private_api::make_item_node(0, 79, 68, 69, true), 
slint::private_api::make_item_node(12, 81, 35, 70, false), 
slint::private_api::make_item_node(8, 125, 35, 71, false), 
slint::private_api::make_item_node(3, 93, 79, 72, false), 
slint::private_api::make_item_node(0, 96, 79, 73, false), 
slint::private_api::make_item_node(3, 96, 79, 74, false), 
slint::private_api::make_item_node(4, 99, 79, 75, false), 
slint::private_api::make_item_node(3, 103, 79, 76, false), 
slint::private_api::make_item_node(3, 106, 79, 77, false), 
slint::private_api::make_item_node(3, 109, 79, 78, false), 
slint::private_api::make_item_node(3, 112, 79, 79, false), 
slint::private_api::make_item_node(3, 115, 79, 80, false), 
slint::private_api::make_item_node(3, 118, 79, 81, false), 
slint::private_api::make_item_node(0, 121, 79, 82, false), 
slint::private_api::make_item_node(4, 121, 79, 83, false), 
slint::private_api::make_item_node(0, 96, 81, 84, true), 
slint::private_api::make_item_node(0, 96, 81, 85, false), 
slint::private_api::make_item_node(0, 96, 81, 86, true), 
slint::private_api::make_item_node(0, 99, 83, 87, true), 
slint::private_api::make_item_node(0, 99, 83, 88, true), 
slint::private_api::make_item_node(0, 99, 83, 89, true), 
slint::private_api::make_item_node(0, 103, 84, 90, false), 
slint::private_api::make_item_node(0, 103, 84, 91, true), 
slint::private_api::make_item_node(0, 103, 84, 92, true), 
slint::private_api::make_item_node(0, 103, 84, 93, true), 
slint::private_api::make_item_node(0, 106, 85, 94, true), 
slint::private_api::make_item_node(0, 106, 85, 95, true), 
slint::private_api::make_item_node(0, 106, 85, 96, true), 
slint::private_api::make_item_node(0, 109, 86, 97, true), 
slint::private_api::make_item_node(0, 109, 86, 98, true), 
slint::private_api::make_item_node(0, 109, 86, 99, true), 
slint::private_api::make_item_node(0, 112, 87, 100, true), 
slint::private_api::make_item_node(0, 112, 87, 101, true), 
slint::private_api::make_item_node(0, 112, 87, 102, true), 
slint::private_api::make_item_node(0, 115, 88, 103, true), 
slint::private_api::make_item_node(0, 115, 88, 104, true), 
slint::private_api::make_item_node(0, 115, 88, 105, true), 
slint::private_api::make_item_node(0, 118, 89, 106, true), 
slint::private_api::make_item_node(0, 118, 89, 107, true), 
slint::private_api::make_item_node(0, 118, 89, 108, true), 
slint::private_api::make_item_node(0, 121, 90, 109, true), 
slint::private_api::make_item_node(0, 121, 90, 110, true), 
slint::private_api::make_item_node(0, 121, 90, 111, true), 
slint::private_api::make_item_node(0, 125, 92, 112, false), 
slint::private_api::make_item_node(0, 125, 92, 113, true), 
slint::private_api::make_item_node(0, 125, 92, 114, false), 
slint::private_api::make_item_node(0, 125, 92, 115, true), 
slint::private_api::make_item_node(3, 133, 80, 116, false), 
slint::private_api::make_item_node(0, 136, 80, 117, false), 
slint::private_api::make_item_node(3, 136, 80, 118, false), 
slint::private_api::make_item_node(0, 143, 80, 119, true), 
slint::private_api::make_item_node(4, 143, 80, 120, false), 
slint::private_api::make_item_node(4, 148, 80, 121, false), 
slint::private_api::make_item_node(4, 153, 80, 122, false), 
slint::private_api::make_item_node(4, 158, 80, 123, false), 
slint::private_api::make_item_node(0, 136, 125, 124, true), 
slint::private_api::make_item_node(0, 136, 125, 125, false), 
slint::private_api::make_item_node(0, 136, 125, 126, true), 
slint::private_api::make_item_node(2, 139, 127, 127, false), 
slint::private_api::make_item_node(0, 141, 127, 128, false), 
slint::private_api::make_item_node(2, 141, 127, 129, false), 
slint::private_api::make_item_node(0, 141, 136, 130, true), 
slint::private_api::make_item_node(0, 141, 136, 131, true), 
slint::private_api::make_item_node(0, 143, 138, 132, true), 
slint::private_api::make_item_node(0, 143, 138, 133, true), 
slint::private_api::make_item_node(1, 147, 129, 134, false), 
slint::private_api::make_item_node(0, 148, 129, 135, false), 
slint::private_api::make_item_node(0, 148, 129, 136, true), 
slint::private_api::make_item_node(0, 148, 129, 137, true), 
slint::private_api::make_item_node(0, 148, 143, 138, true), 
slint::private_api::make_item_node(1, 152, 130, 139, false), 
slint::private_api::make_item_node(0, 153, 130, 140, false), 
slint::private_api::make_item_node(0, 153, 130, 141, true), 
slint::private_api::make_item_node(0, 153, 130, 142, true), 
slint::private_api::make_item_node(0, 153, 148, 143, true), 
slint::private_api::make_item_node(1, 157, 131, 144, false), 
slint::private_api::make_item_node(0, 158, 131, 145, false), 
slint::private_api::make_item_node(0, 158, 131, 146, true), 
slint::private_api::make_item_node(0, 158, 131, 147, true), 
slint::private_api::make_item_node(0, 158, 153, 148, true), 
slint::private_api::make_item_node(1, 162, 132, 149, false), 
slint::private_api::make_item_node(0, 163, 132, 150, false), 
slint::private_api::make_item_node(0, 163, 132, 151, true), 
slint::private_api::make_item_node(0, 163, 132, 152, true), 
slint::private_api::make_item_node(0, 163, 158, 153, true), 
slint::private_api::make_item_node(2, 165, 36, 154, false), 
slint::private_api::make_item_node(5, 194, 36, 155, false), 
slint::private_api::make_item_node(3, 167, 163, 156, false), 
slint::private_api::make_item_node(8, 170, 163, 157, false), 
slint::private_api::make_item_node(0, 170, 165, 158, true), 
slint::private_api::make_item_node(0, 170, 165, 159, false), 
slint::private_api::make_item_node(0, 170, 165, 160, true), 
slint::private_api::make_item_node(2, 178, 166, 161, false), 
slint::private_api::make_item_node(2, 180, 166, 162, false), 
slint::private_api::make_item_node(2, 182, 166, 163, false), 
slint::private_api::make_item_node(2, 184, 166, 164, false), 
slint::private_api::make_item_node(2, 186, 166, 165, false), 
slint::private_api::make_item_node(2, 188, 166, 166, false), 
slint::private_api::make_item_node(2, 190, 166, 167, false), 
slint::private_api::make_item_node(2, 192, 166, 168, false), 
slint::private_api::make_item_node(0, 180, 170, 169, true), 
slint::private_api::make_item_node(0, 180, 170, 170, true), 
slint::private_api::make_item_node(0, 182, 171, 171, true), 
slint::private_api::make_item_node(0, 182, 171, 172, true), 
slint::private_api::make_item_node(0, 184, 172, 173, true), 
slint::private_api::make_item_node(0, 184, 172, 174, true), 
slint::private_api::make_item_node(0, 186, 173, 175, true), 
slint::private_api::make_item_node(0, 186, 173, 176, true), 
slint::private_api::make_item_node(0, 188, 174, 177, true), 
slint::private_api::make_item_node(0, 188, 174, 178, true), 
slint::private_api::make_item_node(0, 190, 175, 179, true), 
slint::private_api::make_item_node(0, 190, 175, 180, true), 
slint::private_api::make_item_node(0, 192, 176, 181, true), 
slint::private_api::make_item_node(0, 192, 176, 182, true), 
slint::private_api::make_item_node(0, 194, 177, 183, true), 
slint::private_api::make_item_node(0, 194, 177, 184, true), 
slint::private_api::make_item_node(4, 199, 164, 185, false), 
slint::private_api::make_item_node(3, 203, 164, 186, false), 
slint::private_api::make_item_node(3, 208, 164, 187, false), 
slint::private_api::make_item_node(0, 213, 164, 188, false), 
slint::private_api::make_item_node(5, 213, 164, 189, false), 
slint::private_api::make_item_node(0, 203, 194, 190, true), 
slint::private_api::make_item_node(0, 203, 194, 191, false), 
slint::private_api::make_item_node(0, 203, 194, 192, true), 
slint::private_api::make_item_node(0, 203, 194, 193, true), 
slint::private_api::make_item_node(0, 206, 195, 194, true), 
slint::private_api::make_item_node(1, 206, 195, 195, false), 
slint::private_api::make_item_node(0, 208, 195, 196, true), 
slint::private_api::make_item_node(1, 207, 204, 197, false), 
slint::private_api::make_item_node(0, 208, 206, 198, false), 
slint::private_api::make_item_node(0, 211, 196, 199, true), 
slint::private_api::make_item_node(1, 211, 196, 200, false), 
slint::private_api::make_item_node(0, 213, 196, 201, true), 
slint::private_api::make_item_node(1, 212, 209, 202, false), 
slint::private_api::make_item_node(0, 213, 211, 203, false), 
slint::private_api::make_item_node(2, 218, 198, 204, false), 
slint::private_api::make_item_node(0, 220, 198, 205, false), 
slint::private_api::make_item_node(2, 220, 198, 206, false), 
slint::private_api::make_item_node(0, 222, 198, 207, false), 
slint::private_api::make_item_node(2, 222, 198, 208, false), 
slint::private_api::make_item_node(0, 220, 213, 209, true), 
slint::private_api::make_item_node(0, 220, 213, 210, true), 
slint::private_api::make_item_node(0, 222, 215, 211, true), 
slint::private_api::make_item_node(0, 222, 215, 212, true), 
slint::private_api::make_item_node(0, 224, 217, 213, true), 
slint::private_api::make_item_node(0, 224, 217, 214, true) };
    return slint::private_api::make_slice(std::span(children));
}

auto MainWindow::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(WindowItemVTable),  offsetof(MainWindow, field_root_15) }, 
{ SLINT_GET_ITEM_VTABLE(RectangleVTable),  offsetof(MainWindow, field_rectangle_17) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_empty_28) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_19) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_21) }, 
{ SLINT_GET_ITEM_VTABLE(RectangleVTable),  offsetof(MainWindow, field_rectangle_22) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_23) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_rectangle_24) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_25) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_27) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_20) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_26) }, 
{ SLINT_GET_ITEM_VTABLE(RectangleVTable),  offsetof(MainWindow, field_rectangle_29) }, 
{ SLINT_GET_ITEM_VTABLE(RectangleVTable),  offsetof(MainWindow, field_rectangle_55) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_31) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_32) }, 
{ SLINT_GET_ITEM_VTABLE(RectangleVTable),  offsetof(MainWindow, field_rectangle_36) }, 
{ SLINT_GET_ITEM_VTABLE(RectangleVTable),  offsetof(MainWindow, field_rectangle_40) }, 
{ SLINT_GET_ITEM_VTABLE(RectangleVTable),  offsetof(MainWindow, field_rectangle_44) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_rectangle_48) }, 
{ SLINT_GET_ITEM_VTABLE(RectangleVTable),  offsetof(MainWindow, field_rectangle_49) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_50) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_51) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_34) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_35) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_38) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_39) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_42) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_43) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_46) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_47) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_53) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_54) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_empty_57) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_empty_65) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_empty_84) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_empty_173) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_empty_58) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_rectangle_61) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable), offsetof(MainWindow, field_button_62) +  offsetof(Button_root_3, field_root_3) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable), offsetof(MainWindow, field_button_63) +  offsetof(Button_root_3, field_root_3) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable), offsetof(MainWindow, field_button_64) +  offsetof(Button_root_3, field_root_3) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_59) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_60) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(MainWindow, field_button_62) +  offsetof(Button_root_3, field_i_background_4) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable), offsetof(MainWindow, field_button_62) +  offsetof(Button_root_3, field_i_touch_area_11) }, 
{ SLINT_GET_ITEM_VTABLE(FocusScopeVTable), offsetof(MainWindow, field_button_62) +  offsetof(Button_root_3, field_i_focus_scope_12) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(MainWindow, field_button_62) +  offsetof(Button_root_3, field_i_border_5) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(MainWindow, field_button_63) +  offsetof(Button_root_3, field_i_background_4) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable), offsetof(MainWindow, field_button_63) +  offsetof(Button_root_3, field_i_touch_area_11) }, 
{ SLINT_GET_ITEM_VTABLE(FocusScopeVTable), offsetof(MainWindow, field_button_63) +  offsetof(Button_root_3, field_i_focus_scope_12) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(MainWindow, field_button_63) +  offsetof(Button_root_3, field_i_border_5) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(MainWindow, field_button_64) +  offsetof(Button_root_3, field_i_background_4) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable), offsetof(MainWindow, field_button_64) +  offsetof(Button_root_3, field_i_touch_area_11) }, 
{ SLINT_GET_ITEM_VTABLE(FocusScopeVTable), offsetof(MainWindow, field_button_64) +  offsetof(Button_root_3, field_i_focus_scope_12) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(MainWindow, field_button_64) +  offsetof(Button_root_3, field_i_border_5) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_66) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_70) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_74) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_80) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_68) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_69) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_72) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_73) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_76) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_empty_77) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_78) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_79) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_82) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_83) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_85) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_131) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_empty_87) }, 
{ SLINT_GET_ITEM_VTABLE(RectangleVTable),  offsetof(MainWindow, field_rectangle_91) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_empty_92) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_empty_96) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_empty_101) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_empty_105) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_empty_109) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_empty_113) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_empty_117) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_empty_121) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_rectangle_125) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_empty_126) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_88) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_rectangle_89) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_90) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_93) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_94) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_95) }, 
{ SLINT_GET_ITEM_VTABLE(RectangleVTable),  offsetof(MainWindow, field_rectangle_97) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_98) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_99) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_100) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_102) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_103) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_104) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_106) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_107) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_108) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_110) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_111) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_112) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_114) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_115) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_116) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_118) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_119) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_120) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_122) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_123) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_124) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_127) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_128) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_rectangle_129) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_130) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_empty_133) }, 
{ SLINT_GET_ITEM_VTABLE(RectangleVTable),  offsetof(MainWindow, field_rectangle_137) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_empty_138) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_148) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_empty_149) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_empty_155) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_empty_161) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_empty_167) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_134) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_rectangle_135) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_136) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_139) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_rectangle_143) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_144) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_141) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_142) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_146) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_147) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_150) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_rectangle_152) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_153) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_154) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_151) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_156) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_rectangle_158) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_159) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_160) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_157) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_162) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_rectangle_164) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_165) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_166) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_163) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_168) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_rectangle_170) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_171) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_172) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_169) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_174) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_213) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_empty_176) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_empty_180) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_177) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_rectangle_178) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_179) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_181) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_185) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_189) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_193) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_197) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_201) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_205) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_209) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_183) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_184) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_187) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_188) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_191) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_192) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_195) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_196) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_199) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_200) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_203) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_204) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_207) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_208) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_211) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_212) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_empty_215) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_empty_220) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_empty_226) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_rectangle_232) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_empty_233) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_216) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_rectangle_217) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_218) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_219) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_221) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_empty_222) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_225) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_223) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_224) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_227) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_empty_228) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_231) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_229) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_230) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_234) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_rectangle_238) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_239) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_rectangle_243) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_244) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_236) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_237) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_241) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_242) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_246) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(MainWindow, field_text_247) } };
    return slint::private_api::make_slice(std::span(items));
}

auto MainWindow::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const MainWindow*>(component.instance)->layout_info(o);
}

auto MainWindow::ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool{
    return reinterpret_cast<const MainWindow*>(component.instance)->ensure_instantiated();
}

auto MainWindow::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const MainWindow*>(component.instance)->item_geometry(index);
}

auto MainWindow::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const MainWindow*>(component.instance)->accessible_role(index);
}

auto MainWindow::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const MainWindow*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

auto MainWindow::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const MainWindow*>(component.instance)->accessibility_action(index, *action);
}

auto MainWindow::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const MainWindow*>(component.instance)->supported_accessibility_actions(index);
}

auto MainWindow::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

auto MainWindow::window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const MainWindow*>(component.instance)->globals->window().window_handle();
}

auto MainWindow::create () -> slint::ComponentHandle<MainWindow>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, MainWindow>::make();
    auto self = const_cast<MainWindow *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::cbindgen_private::slint_ensure_backend();
    self->globals = &self->m_globals;
    self->m_globals.root_weak = self->self_weak;
    self->m_globals.init_globals();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), self->globals->m_window);
    self->init(self->globals, self->self_weak, 0, 1 );
    auto &window = self->globals->window();
    self->user_init();
    self->m_globals.window();
    slint::cbindgen_private::slint_windowrc_ensure_tree_instantiated(reinterpret_cast<const slint::cbindgen_private::WindowAdapterRcOpaque*>(&window.window_handle()));
    return slint::ComponentHandle<MainWindow>{ self_rc };
}

MainWindow::~MainWindow (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

auto MainWindow::get_compare_flag () const -> slint::SharedString{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->field_root_15_compare_flag.get();
}

auto MainWindow::set_compare_flag (const slint::SharedString &value) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_15_compare_flag.set(value);
}

auto MainWindow::get_current_instruction () const -> slint::SharedString{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->field_root_15_current_instruction.get();
}

auto MainWindow::set_current_instruction (const slint::SharedString &value) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_15_current_instruction.set(value);
}

auto MainWindow::get_cycle_count () const -> int{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->field_root_15_cycle_count.get();
}

auto MainWindow::set_cycle_count (const int &value) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_15_cycle_count.set(value);
}

auto MainWindow::get_executed_count () const -> int{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->field_root_15_executed_count.get();
}

auto MainWindow::set_executed_count (const int &value) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_15_executed_count.set(value);
}

auto MainWindow::get_l1_evictions () const -> int{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->field_root_15_l1_evictions.get();
}

auto MainWindow::set_l1_evictions (const int &value) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_15_l1_evictions.set(value);
}

auto MainWindow::get_l1_hits () const -> int{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->field_root_15_l1_hits.get();
}

auto MainWindow::set_l1_hits (const int &value) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_15_l1_hits.set(value);
}

auto MainWindow::get_l1_misses () const -> int{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->field_root_15_l1_misses.get();
}

auto MainWindow::set_l1_misses (const int &value) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_15_l1_misses.set(value);
}

auto MainWindow::get_l1_rate () const -> slint::SharedString{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->field_root_15_l1_rate.get();
}

auto MainWindow::set_l1_rate (const slint::SharedString &value) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_15_l1_rate.set(value);
}

auto MainWindow::get_memory_word_4 () const -> int{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->field_root_15_memory_word_4.get();
}

auto MainWindow::set_memory_word_4 (const int &value) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_15_memory_word_4.set(value);
}

auto MainWindow::get_pc_value () const -> int{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->field_root_15_pc_value.get();
}

auto MainWindow::set_pc_value (const int &value) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_15_pc_value.set(value);
}

auto MainWindow::get_reg0 () const -> int{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->field_root_15_reg0.get();
}

auto MainWindow::set_reg0 (const int &value) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_15_reg0.set(value);
}

auto MainWindow::get_reg0_hex () const -> slint::SharedString{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->field_root_15_reg0_hex.get();
}

auto MainWindow::set_reg0_hex (const slint::SharedString &value) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_15_reg0_hex.set(value);
}

auto MainWindow::get_reg1 () const -> int{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->field_root_15_reg1.get();
}

auto MainWindow::set_reg1 (const int &value) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_15_reg1.set(value);
}

auto MainWindow::get_reg1_hex () const -> slint::SharedString{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->field_root_15_reg1_hex.get();
}

auto MainWindow::set_reg1_hex (const slint::SharedString &value) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_15_reg1_hex.set(value);
}

auto MainWindow::get_reg2 () const -> int{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->field_root_15_reg2.get();
}

auto MainWindow::set_reg2 (const int &value) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_15_reg2.set(value);
}

auto MainWindow::get_reg2_hex () const -> slint::SharedString{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->field_root_15_reg2_hex.get();
}

auto MainWindow::set_reg2_hex (const slint::SharedString &value) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_15_reg2_hex.set(value);
}

auto MainWindow::get_reg3 () const -> int{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->field_root_15_reg3.get();
}

auto MainWindow::set_reg3 (const int &value) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_15_reg3.set(value);
}

auto MainWindow::get_reg3_hex () const -> slint::SharedString{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->field_root_15_reg3_hex.get();
}

auto MainWindow::set_reg3_hex (const slint::SharedString &value) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_15_reg3_hex.set(value);
}

auto MainWindow::invoke_reset_requested () const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->field_root_15_reset_requested.call();
}

auto MainWindow::invoke_run_requested () const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->field_root_15_run_requested.call();
}

auto MainWindow::invoke_step_requested () const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->field_root_15_step_requested.call();
}

auto MainWindow::get_task_status () const -> slint::SharedString{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->field_root_15_task_status.get();
}

auto MainWindow::set_task_status (const slint::SharedString &value) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_15_task_status.set(value);
}

auto MainWindow::show () -> void{
    m_globals.window().show();
}

auto MainWindow::hide () -> void{
    m_globals.window().hide();
}

auto MainWindow::window () const -> slint::Window&{
    return m_globals.window();
}

auto MainWindow::run () -> void{
    show();
    slint::run_event_loop();
    hide();
}
