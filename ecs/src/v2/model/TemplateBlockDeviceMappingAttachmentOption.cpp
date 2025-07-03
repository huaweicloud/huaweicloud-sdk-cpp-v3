

#include "huaweicloud/ecs/v2/model/TemplateBlockDeviceMappingAttachmentOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




TemplateBlockDeviceMappingAttachmentOption::TemplateBlockDeviceMappingAttachmentOption()
{
    bootIndex_ = 0;
    bootIndexIsSet_ = false;
    deleteOnTermination_ = false;
    deleteOnTerminationIsSet_ = false;
}

TemplateBlockDeviceMappingAttachmentOption::~TemplateBlockDeviceMappingAttachmentOption() = default;

void TemplateBlockDeviceMappingAttachmentOption::validate()
{
}

web::json::value TemplateBlockDeviceMappingAttachmentOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bootIndexIsSet_) {
        val[utility::conversions::to_string_t("boot_index")] = ModelBase::toJson(bootIndex_);
    }
    if(deleteOnTerminationIsSet_) {
        val[utility::conversions::to_string_t("delete_on_termination")] = ModelBase::toJson(deleteOnTermination_);
    }

    return val;
}
bool TemplateBlockDeviceMappingAttachmentOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("boot_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("boot_index"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBootIndex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete_on_termination"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_on_termination"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteOnTermination(refVal);
        }
    }
    return ok;
}


int32_t TemplateBlockDeviceMappingAttachmentOption::getBootIndex() const
{
    return bootIndex_;
}

void TemplateBlockDeviceMappingAttachmentOption::setBootIndex(int32_t value)
{
    bootIndex_ = value;
    bootIndexIsSet_ = true;
}

bool TemplateBlockDeviceMappingAttachmentOption::bootIndexIsSet() const
{
    return bootIndexIsSet_;
}

void TemplateBlockDeviceMappingAttachmentOption::unsetbootIndex()
{
    bootIndexIsSet_ = false;
}

bool TemplateBlockDeviceMappingAttachmentOption::isDeleteOnTermination() const
{
    return deleteOnTermination_;
}

void TemplateBlockDeviceMappingAttachmentOption::setDeleteOnTermination(bool value)
{
    deleteOnTermination_ = value;
    deleteOnTerminationIsSet_ = true;
}

bool TemplateBlockDeviceMappingAttachmentOption::deleteOnTerminationIsSet() const
{
    return deleteOnTerminationIsSet_;
}

void TemplateBlockDeviceMappingAttachmentOption::unsetdeleteOnTermination()
{
    deleteOnTerminationIsSet_ = false;
}

}
}
}
}
}


