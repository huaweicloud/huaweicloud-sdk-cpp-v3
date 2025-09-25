

#include "huaweicloud/codehub/v4/model/ChangesTreeDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ChangesTreeDto::ChangesTreeDto()
{
    canShowMyApprovalFiles_ = false;
    canShowMyApprovalFilesIsSet_ = false;
    treeIsSet_ = false;
}

ChangesTreeDto::~ChangesTreeDto() = default;

void ChangesTreeDto::validate()
{
}

web::json::value ChangesTreeDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(canShowMyApprovalFilesIsSet_) {
        val[utility::conversions::to_string_t("can_show_my_approval_files")] = ModelBase::toJson(canShowMyApprovalFiles_);
    }
    if(treeIsSet_) {
        val[utility::conversions::to_string_t("tree")] = ModelBase::toJson(tree_);
    }

    return val;
}
bool ChangesTreeDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("can_show_my_approval_files"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_show_my_approval_files"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanShowMyApprovalFiles(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tree"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tree"));
        if(!fieldValue.is_null())
        {
            std::vector<ChangesTreeObjectDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTree(refVal);
        }
    }
    return ok;
}


bool ChangesTreeDto::isCanShowMyApprovalFiles() const
{
    return canShowMyApprovalFiles_;
}

void ChangesTreeDto::setCanShowMyApprovalFiles(bool value)
{
    canShowMyApprovalFiles_ = value;
    canShowMyApprovalFilesIsSet_ = true;
}

bool ChangesTreeDto::canShowMyApprovalFilesIsSet() const
{
    return canShowMyApprovalFilesIsSet_;
}

void ChangesTreeDto::unsetcanShowMyApprovalFiles()
{
    canShowMyApprovalFilesIsSet_ = false;
}

std::vector<ChangesTreeObjectDto>& ChangesTreeDto::getTree()
{
    return tree_;
}

void ChangesTreeDto::setTree(const std::vector<ChangesTreeObjectDto>& value)
{
    tree_ = value;
    treeIsSet_ = true;
}

bool ChangesTreeDto::treeIsSet() const
{
    return treeIsSet_;
}

void ChangesTreeDto::unsettree()
{
    treeIsSet_ = false;
}

}
}
}
}
}


