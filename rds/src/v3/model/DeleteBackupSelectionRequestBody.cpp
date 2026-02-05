

#include "huaweicloud/rds/v3/model/DeleteBackupSelectionRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeleteBackupSelectionRequestBody::DeleteBackupSelectionRequestBody()
{
    selection_ = false;
    selectionIsSet_ = false;
}

DeleteBackupSelectionRequestBody::~DeleteBackupSelectionRequestBody() = default;

void DeleteBackupSelectionRequestBody::validate()
{
}

web::json::value DeleteBackupSelectionRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(selectionIsSet_) {
        val[utility::conversions::to_string_t("selection")] = ModelBase::toJson(selection_);
    }

    return val;
}
bool DeleteBackupSelectionRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("selection"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("selection"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSelection(refVal);
        }
    }
    return ok;
}


bool DeleteBackupSelectionRequestBody::isSelection() const
{
    return selection_;
}

void DeleteBackupSelectionRequestBody::setSelection(bool value)
{
    selection_ = value;
    selectionIsSet_ = true;
}

bool DeleteBackupSelectionRequestBody::selectionIsSet() const
{
    return selectionIsSet_;
}

void DeleteBackupSelectionRequestBody::unsetselection()
{
    selectionIsSet_ = false;
}

}
}
}
}
}


