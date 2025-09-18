

#include "huaweicloud/codeartscheck/v2/model/TreeNode.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




TreeNode::TreeNode()
{
    fileName_ = "";
    fileNameIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    isLeaf_ = false;
    isLeafIsSet_ = false;
    checkboxStatus_ = "";
    checkboxStatusIsSet_ = false;
}

TreeNode::~TreeNode() = default;

void TreeNode::validate()
{
}

web::json::value TreeNode::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }
    if(isLeafIsSet_) {
        val[utility::conversions::to_string_t("is_leaf")] = ModelBase::toJson(isLeaf_);
    }
    if(checkboxStatusIsSet_) {
        val[utility::conversions::to_string_t("checkbox_status")] = ModelBase::toJson(checkboxStatus_);
    }

    return val;
}
bool TreeNode::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilePath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_leaf"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_leaf"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsLeaf(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("checkbox_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("checkbox_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckboxStatus(refVal);
        }
    }
    return ok;
}


std::string TreeNode::getFileName() const
{
    return fileName_;
}

void TreeNode::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool TreeNode::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void TreeNode::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string TreeNode::getFilePath() const
{
    return filePath_;
}

void TreeNode::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool TreeNode::filePathIsSet() const
{
    return filePathIsSet_;
}

void TreeNode::unsetfilePath()
{
    filePathIsSet_ = false;
}

bool TreeNode::isIsLeaf() const
{
    return isLeaf_;
}

void TreeNode::setIsLeaf(bool value)
{
    isLeaf_ = value;
    isLeafIsSet_ = true;
}

bool TreeNode::isLeafIsSet() const
{
    return isLeafIsSet_;
}

void TreeNode::unsetisLeaf()
{
    isLeafIsSet_ = false;
}

std::string TreeNode::getCheckboxStatus() const
{
    return checkboxStatus_;
}

void TreeNode::setCheckboxStatus(const std::string& value)
{
    checkboxStatus_ = value;
    checkboxStatusIsSet_ = true;
}

bool TreeNode::checkboxStatusIsSet() const
{
    return checkboxStatusIsSet_;
}

void TreeNode::unsetcheckboxStatus()
{
    checkboxStatusIsSet_ = false;
}

}
}
}
}
}


