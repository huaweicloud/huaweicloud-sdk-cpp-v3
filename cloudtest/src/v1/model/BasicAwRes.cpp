

#include "huaweicloud/cloudtest/v1/model/BasicAwRes.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BasicAwRes::BasicAwRes()
{
    awCode_ = "";
    awCodeIsSet_ = false;
    awDescription_ = "";
    awDescriptionIsSet_ = false;
    awMark_ = 0;
    awMarkIsSet_ = false;
    awOperationid_ = "";
    awOperationidIsSet_ = false;
    awTags_ = "";
    awTagsIsSet_ = false;
    awType_ = 0;
    awTypeIsSet_ = false;
    awUniqueid_ = "";
    awUniqueidIsSet_ = false;
    byOrder_ = 0;
    byOrderIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    createTimeStamp_ = 0L;
    createTimeStampIsSet_ = false;
    createTimeString_ = "";
    createTimeStringIsSet_ = false;
    createUser_ = "";
    createUserIsSet_ = false;
    createUserId_ = "";
    createUserIdIsSet_ = false;
    deleteTime_ = "";
    deleteTimeIsSet_ = false;
    deleteUser_ = "";
    deleteUserIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    dftCheckPointListIsSet_ = false;
    dftCustomHeaderIsSet_ = false;
    dftRetryInterval_ = "";
    dftRetryIntervalIsSet_ = false;
    dftRetryTimes_ = "";
    dftRetryTimesIsSet_ = false;
    dftVariableListIsSet_ = false;
    extraInfoIsSet_ = false;
    groupName_ = "";
    groupNameIsSet_ = false;
    hasCode_ = 0;
    hasCodeIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    importPackageIsSet_ = false;
    interfaceLabel_ = "";
    interfaceLabelIsSet_ = false;
    isFavorite_ = 0;
    isFavoriteIsSet_ = false;
    method_ = "";
    methodIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    nameView_ = "";
    nameViewIsSet_ = false;
    originProject_ = "";
    originProjectIsSet_ = false;
    paramTypeAndDftValueIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    protocolType_ = "";
    protocolTypeIsSet_ = false;
    publicAwLibIsSet_ = false;
    publicAwLibId_ = "";
    publicAwLibIdIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    returnType_ = "";
    returnTypeIsSet_ = false;
    rootId_ = "";
    rootIdIsSet_ = false;
    source_ = "";
    sourceIsSet_ = false;
    specialType_ = 0;
    specialTypeIsSet_ = false;
    tmssCaseNumber_ = "";
    tmssCaseNumberIsSet_ = false;
    tmssCaseId_ = "";
    tmssCaseIdIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    updateTimeStamp_ = 0L;
    updateTimeStampIsSet_ = false;
    updateTimeString_ = "";
    updateTimeStringIsSet_ = false;
    updateUser_ = "";
    updateUserIsSet_ = false;
    warningMsg_ = "";
    warningMsgIsSet_ = false;
    yamlName_ = "";
    yamlNameIsSet_ = false;
}

BasicAwRes::~BasicAwRes() = default;

void BasicAwRes::validate()
{
}

web::json::value BasicAwRes::toJson() const
{
    web::json::value val = web::json::value::object();

    if(awCodeIsSet_) {
        val[utility::conversions::to_string_t("aw_code")] = ModelBase::toJson(awCode_);
    }
    if(awDescriptionIsSet_) {
        val[utility::conversions::to_string_t("aw_description")] = ModelBase::toJson(awDescription_);
    }
    if(awMarkIsSet_) {
        val[utility::conversions::to_string_t("aw_mark")] = ModelBase::toJson(awMark_);
    }
    if(awOperationidIsSet_) {
        val[utility::conversions::to_string_t("aw_operationid")] = ModelBase::toJson(awOperationid_);
    }
    if(awTagsIsSet_) {
        val[utility::conversions::to_string_t("aw_tags")] = ModelBase::toJson(awTags_);
    }
    if(awTypeIsSet_) {
        val[utility::conversions::to_string_t("aw_type")] = ModelBase::toJson(awType_);
    }
    if(awUniqueidIsSet_) {
        val[utility::conversions::to_string_t("aw_uniqueid")] = ModelBase::toJson(awUniqueid_);
    }
    if(byOrderIsSet_) {
        val[utility::conversions::to_string_t("by_order")] = ModelBase::toJson(byOrder_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(createTimeStampIsSet_) {
        val[utility::conversions::to_string_t("create_time_stamp")] = ModelBase::toJson(createTimeStamp_);
    }
    if(createTimeStringIsSet_) {
        val[utility::conversions::to_string_t("create_time_string")] = ModelBase::toJson(createTimeString_);
    }
    if(createUserIsSet_) {
        val[utility::conversions::to_string_t("create_user")] = ModelBase::toJson(createUser_);
    }
    if(createUserIdIsSet_) {
        val[utility::conversions::to_string_t("create_user_id")] = ModelBase::toJson(createUserId_);
    }
    if(deleteTimeIsSet_) {
        val[utility::conversions::to_string_t("delete_time")] = ModelBase::toJson(deleteTime_);
    }
    if(deleteUserIsSet_) {
        val[utility::conversions::to_string_t("delete_user")] = ModelBase::toJson(deleteUser_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(dftCheckPointListIsSet_) {
        val[utility::conversions::to_string_t("dft_check_point_list")] = ModelBase::toJson(dftCheckPointList_);
    }
    if(dftCustomHeaderIsSet_) {
        val[utility::conversions::to_string_t("dft_custom_header")] = ModelBase::toJson(dftCustomHeader_);
    }
    if(dftRetryIntervalIsSet_) {
        val[utility::conversions::to_string_t("dft_retry_interval")] = ModelBase::toJson(dftRetryInterval_);
    }
    if(dftRetryTimesIsSet_) {
        val[utility::conversions::to_string_t("dft_retry_times")] = ModelBase::toJson(dftRetryTimes_);
    }
    if(dftVariableListIsSet_) {
        val[utility::conversions::to_string_t("dft_variable_list")] = ModelBase::toJson(dftVariableList_);
    }
    if(extraInfoIsSet_) {
        val[utility::conversions::to_string_t("extra_info")] = ModelBase::toJson(extraInfo_);
    }
    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }
    if(hasCodeIsSet_) {
        val[utility::conversions::to_string_t("has_code")] = ModelBase::toJson(hasCode_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(importPackageIsSet_) {
        val[utility::conversions::to_string_t("import_package")] = ModelBase::toJson(importPackage_);
    }
    if(interfaceLabelIsSet_) {
        val[utility::conversions::to_string_t("interface_label")] = ModelBase::toJson(interfaceLabel_);
    }
    if(isFavoriteIsSet_) {
        val[utility::conversions::to_string_t("is_favorite")] = ModelBase::toJson(isFavorite_);
    }
    if(methodIsSet_) {
        val[utility::conversions::to_string_t("method")] = ModelBase::toJson(method_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(nameViewIsSet_) {
        val[utility::conversions::to_string_t("nameView")] = ModelBase::toJson(nameView_);
    }
    if(originProjectIsSet_) {
        val[utility::conversions::to_string_t("origin_project")] = ModelBase::toJson(originProject_);
    }
    if(paramTypeAndDftValueIsSet_) {
        val[utility::conversions::to_string_t("param_type_and_dft_value")] = ModelBase::toJson(paramTypeAndDftValue_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(protocolTypeIsSet_) {
        val[utility::conversions::to_string_t("protocol_type")] = ModelBase::toJson(protocolType_);
    }
    if(publicAwLibIsSet_) {
        val[utility::conversions::to_string_t("public_aw_lib")] = ModelBase::toJson(publicAwLib_);
    }
    if(publicAwLibIdIsSet_) {
        val[utility::conversions::to_string_t("public_aw_lib_id")] = ModelBase::toJson(publicAwLibId_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(returnTypeIsSet_) {
        val[utility::conversions::to_string_t("return_type")] = ModelBase::toJson(returnType_);
    }
    if(rootIdIsSet_) {
        val[utility::conversions::to_string_t("root_id")] = ModelBase::toJson(rootId_);
    }
    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }
    if(specialTypeIsSet_) {
        val[utility::conversions::to_string_t("special_type")] = ModelBase::toJson(specialType_);
    }
    if(tmssCaseNumberIsSet_) {
        val[utility::conversions::to_string_t("tmssCaseNumber")] = ModelBase::toJson(tmssCaseNumber_);
    }
    if(tmssCaseIdIsSet_) {
        val[utility::conversions::to_string_t("tmss_case_id")] = ModelBase::toJson(tmssCaseId_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(updateTimeStampIsSet_) {
        val[utility::conversions::to_string_t("update_time_stamp")] = ModelBase::toJson(updateTimeStamp_);
    }
    if(updateTimeStringIsSet_) {
        val[utility::conversions::to_string_t("update_time_string")] = ModelBase::toJson(updateTimeString_);
    }
    if(updateUserIsSet_) {
        val[utility::conversions::to_string_t("update_user")] = ModelBase::toJson(updateUser_);
    }
    if(warningMsgIsSet_) {
        val[utility::conversions::to_string_t("warningMsg")] = ModelBase::toJson(warningMsg_);
    }
    if(yamlNameIsSet_) {
        val[utility::conversions::to_string_t("yamlName")] = ModelBase::toJson(yamlName_);
    }

    return val;
}
bool BasicAwRes::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("aw_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("aw_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAwCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("aw_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("aw_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAwDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("aw_mark"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("aw_mark"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAwMark(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("aw_operationid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("aw_operationid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAwOperationid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("aw_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("aw_tags"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAwTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("aw_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("aw_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAwType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("aw_uniqueid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("aw_uniqueid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAwUniqueid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("by_order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("by_order"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setByOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time_stamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time_stamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTimeStamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time_string"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time_string"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTimeString(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dft_check_point_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dft_check_point_list"));
        if(!fieldValue.is_null())
        {
            std::vector<Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDftCheckPointList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dft_custom_header"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dft_custom_header"));
        if(!fieldValue.is_null())
        {
            std::vector<Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDftCustomHeader(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dft_retry_interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dft_retry_interval"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDftRetryInterval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dft_retry_times"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dft_retry_times"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDftRetryTimes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dft_variable_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dft_variable_list"));
        if(!fieldValue.is_null())
        {
            std::vector<Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDftVariableList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extra_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extra_info"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtraInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("has_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("has_code"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHasCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("import_package"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("import_package"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImportPackage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("interface_label"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interface_label"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInterfaceLabel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_favorite"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_favorite"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsFavorite(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("method"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("method"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMethod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nameView"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nameView"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameView(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("origin_project"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_project"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginProject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("param_type_and_dft_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("param_type_and_dft_value"));
        if(!fieldValue.is_null())
        {
            std::vector<Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParamTypeAndDftValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protocol_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocolType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_aw_lib"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_aw_lib"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicAwLib(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_aw_lib_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_aw_lib_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicAwLibId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("return_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("root_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("root_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRootId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("special_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("special_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecialType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tmssCaseNumber"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tmssCaseNumber"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTmssCaseNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tmss_case_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tmss_case_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTmssCaseId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time_stamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time_stamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTimeStamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time_string"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time_string"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTimeString(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("warningMsg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("warningMsg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWarningMsg(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("yamlName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("yamlName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setYamlName(refVal);
        }
    }
    return ok;
}


std::string BasicAwRes::getAwCode() const
{
    return awCode_;
}

void BasicAwRes::setAwCode(const std::string& value)
{
    awCode_ = value;
    awCodeIsSet_ = true;
}

bool BasicAwRes::awCodeIsSet() const
{
    return awCodeIsSet_;
}

void BasicAwRes::unsetawCode()
{
    awCodeIsSet_ = false;
}

std::string BasicAwRes::getAwDescription() const
{
    return awDescription_;
}

void BasicAwRes::setAwDescription(const std::string& value)
{
    awDescription_ = value;
    awDescriptionIsSet_ = true;
}

bool BasicAwRes::awDescriptionIsSet() const
{
    return awDescriptionIsSet_;
}

void BasicAwRes::unsetawDescription()
{
    awDescriptionIsSet_ = false;
}

int32_t BasicAwRes::getAwMark() const
{
    return awMark_;
}

void BasicAwRes::setAwMark(int32_t value)
{
    awMark_ = value;
    awMarkIsSet_ = true;
}

bool BasicAwRes::awMarkIsSet() const
{
    return awMarkIsSet_;
}

void BasicAwRes::unsetawMark()
{
    awMarkIsSet_ = false;
}

std::string BasicAwRes::getAwOperationid() const
{
    return awOperationid_;
}

void BasicAwRes::setAwOperationid(const std::string& value)
{
    awOperationid_ = value;
    awOperationidIsSet_ = true;
}

bool BasicAwRes::awOperationidIsSet() const
{
    return awOperationidIsSet_;
}

void BasicAwRes::unsetawOperationid()
{
    awOperationidIsSet_ = false;
}

std::string BasicAwRes::getAwTags() const
{
    return awTags_;
}

void BasicAwRes::setAwTags(const std::string& value)
{
    awTags_ = value;
    awTagsIsSet_ = true;
}

bool BasicAwRes::awTagsIsSet() const
{
    return awTagsIsSet_;
}

void BasicAwRes::unsetawTags()
{
    awTagsIsSet_ = false;
}

int32_t BasicAwRes::getAwType() const
{
    return awType_;
}

void BasicAwRes::setAwType(int32_t value)
{
    awType_ = value;
    awTypeIsSet_ = true;
}

bool BasicAwRes::awTypeIsSet() const
{
    return awTypeIsSet_;
}

void BasicAwRes::unsetawType()
{
    awTypeIsSet_ = false;
}

std::string BasicAwRes::getAwUniqueid() const
{
    return awUniqueid_;
}

void BasicAwRes::setAwUniqueid(const std::string& value)
{
    awUniqueid_ = value;
    awUniqueidIsSet_ = true;
}

bool BasicAwRes::awUniqueidIsSet() const
{
    return awUniqueidIsSet_;
}

void BasicAwRes::unsetawUniqueid()
{
    awUniqueidIsSet_ = false;
}

int32_t BasicAwRes::getByOrder() const
{
    return byOrder_;
}

void BasicAwRes::setByOrder(int32_t value)
{
    byOrder_ = value;
    byOrderIsSet_ = true;
}

bool BasicAwRes::byOrderIsSet() const
{
    return byOrderIsSet_;
}

void BasicAwRes::unsetbyOrder()
{
    byOrderIsSet_ = false;
}

std::string BasicAwRes::getCreateTime() const
{
    return createTime_;
}

void BasicAwRes::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool BasicAwRes::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void BasicAwRes::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t BasicAwRes::getCreateTimeStamp() const
{
    return createTimeStamp_;
}

void BasicAwRes::setCreateTimeStamp(int64_t value)
{
    createTimeStamp_ = value;
    createTimeStampIsSet_ = true;
}

bool BasicAwRes::createTimeStampIsSet() const
{
    return createTimeStampIsSet_;
}

void BasicAwRes::unsetcreateTimeStamp()
{
    createTimeStampIsSet_ = false;
}

std::string BasicAwRes::getCreateTimeString() const
{
    return createTimeString_;
}

void BasicAwRes::setCreateTimeString(const std::string& value)
{
    createTimeString_ = value;
    createTimeStringIsSet_ = true;
}

bool BasicAwRes::createTimeStringIsSet() const
{
    return createTimeStringIsSet_;
}

void BasicAwRes::unsetcreateTimeString()
{
    createTimeStringIsSet_ = false;
}

std::string BasicAwRes::getCreateUser() const
{
    return createUser_;
}

void BasicAwRes::setCreateUser(const std::string& value)
{
    createUser_ = value;
    createUserIsSet_ = true;
}

bool BasicAwRes::createUserIsSet() const
{
    return createUserIsSet_;
}

void BasicAwRes::unsetcreateUser()
{
    createUserIsSet_ = false;
}

std::string BasicAwRes::getCreateUserId() const
{
    return createUserId_;
}

void BasicAwRes::setCreateUserId(const std::string& value)
{
    createUserId_ = value;
    createUserIdIsSet_ = true;
}

bool BasicAwRes::createUserIdIsSet() const
{
    return createUserIdIsSet_;
}

void BasicAwRes::unsetcreateUserId()
{
    createUserIdIsSet_ = false;
}

std::string BasicAwRes::getDeleteTime() const
{
    return deleteTime_;
}

void BasicAwRes::setDeleteTime(const std::string& value)
{
    deleteTime_ = value;
    deleteTimeIsSet_ = true;
}

bool BasicAwRes::deleteTimeIsSet() const
{
    return deleteTimeIsSet_;
}

void BasicAwRes::unsetdeleteTime()
{
    deleteTimeIsSet_ = false;
}

std::string BasicAwRes::getDeleteUser() const
{
    return deleteUser_;
}

void BasicAwRes::setDeleteUser(const std::string& value)
{
    deleteUser_ = value;
    deleteUserIsSet_ = true;
}

bool BasicAwRes::deleteUserIsSet() const
{
    return deleteUserIsSet_;
}

void BasicAwRes::unsetdeleteUser()
{
    deleteUserIsSet_ = false;
}

std::string BasicAwRes::getDescription() const
{
    return description_;
}

void BasicAwRes::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool BasicAwRes::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void BasicAwRes::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<Object>& BasicAwRes::getDftCheckPointList()
{
    return dftCheckPointList_;
}

void BasicAwRes::setDftCheckPointList(const std::vector<Object>& value)
{
    dftCheckPointList_ = value;
    dftCheckPointListIsSet_ = true;
}

bool BasicAwRes::dftCheckPointListIsSet() const
{
    return dftCheckPointListIsSet_;
}

void BasicAwRes::unsetdftCheckPointList()
{
    dftCheckPointListIsSet_ = false;
}

std::vector<Object>& BasicAwRes::getDftCustomHeader()
{
    return dftCustomHeader_;
}

void BasicAwRes::setDftCustomHeader(const std::vector<Object>& value)
{
    dftCustomHeader_ = value;
    dftCustomHeaderIsSet_ = true;
}

bool BasicAwRes::dftCustomHeaderIsSet() const
{
    return dftCustomHeaderIsSet_;
}

void BasicAwRes::unsetdftCustomHeader()
{
    dftCustomHeaderIsSet_ = false;
}

std::string BasicAwRes::getDftRetryInterval() const
{
    return dftRetryInterval_;
}

void BasicAwRes::setDftRetryInterval(const std::string& value)
{
    dftRetryInterval_ = value;
    dftRetryIntervalIsSet_ = true;
}

bool BasicAwRes::dftRetryIntervalIsSet() const
{
    return dftRetryIntervalIsSet_;
}

void BasicAwRes::unsetdftRetryInterval()
{
    dftRetryIntervalIsSet_ = false;
}

std::string BasicAwRes::getDftRetryTimes() const
{
    return dftRetryTimes_;
}

void BasicAwRes::setDftRetryTimes(const std::string& value)
{
    dftRetryTimes_ = value;
    dftRetryTimesIsSet_ = true;
}

bool BasicAwRes::dftRetryTimesIsSet() const
{
    return dftRetryTimesIsSet_;
}

void BasicAwRes::unsetdftRetryTimes()
{
    dftRetryTimesIsSet_ = false;
}

std::vector<Object>& BasicAwRes::getDftVariableList()
{
    return dftVariableList_;
}

void BasicAwRes::setDftVariableList(const std::vector<Object>& value)
{
    dftVariableList_ = value;
    dftVariableListIsSet_ = true;
}

bool BasicAwRes::dftVariableListIsSet() const
{
    return dftVariableListIsSet_;
}

void BasicAwRes::unsetdftVariableList()
{
    dftVariableListIsSet_ = false;
}

Object BasicAwRes::getExtraInfo() const
{
    return extraInfo_;
}

void BasicAwRes::setExtraInfo(const Object& value)
{
    extraInfo_ = value;
    extraInfoIsSet_ = true;
}

bool BasicAwRes::extraInfoIsSet() const
{
    return extraInfoIsSet_;
}

void BasicAwRes::unsetextraInfo()
{
    extraInfoIsSet_ = false;
}

std::string BasicAwRes::getGroupName() const
{
    return groupName_;
}

void BasicAwRes::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool BasicAwRes::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void BasicAwRes::unsetgroupName()
{
    groupNameIsSet_ = false;
}

int32_t BasicAwRes::getHasCode() const
{
    return hasCode_;
}

void BasicAwRes::setHasCode(int32_t value)
{
    hasCode_ = value;
    hasCodeIsSet_ = true;
}

bool BasicAwRes::hasCodeIsSet() const
{
    return hasCodeIsSet_;
}

void BasicAwRes::unsethasCode()
{
    hasCodeIsSet_ = false;
}

std::string BasicAwRes::getId() const
{
    return id_;
}

void BasicAwRes::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BasicAwRes::idIsSet() const
{
    return idIsSet_;
}

void BasicAwRes::unsetid()
{
    idIsSet_ = false;
}

std::vector<std::string>& BasicAwRes::getImportPackage()
{
    return importPackage_;
}

void BasicAwRes::setImportPackage(const std::vector<std::string>& value)
{
    importPackage_ = value;
    importPackageIsSet_ = true;
}

bool BasicAwRes::importPackageIsSet() const
{
    return importPackageIsSet_;
}

void BasicAwRes::unsetimportPackage()
{
    importPackageIsSet_ = false;
}

std::string BasicAwRes::getInterfaceLabel() const
{
    return interfaceLabel_;
}

void BasicAwRes::setInterfaceLabel(const std::string& value)
{
    interfaceLabel_ = value;
    interfaceLabelIsSet_ = true;
}

bool BasicAwRes::interfaceLabelIsSet() const
{
    return interfaceLabelIsSet_;
}

void BasicAwRes::unsetinterfaceLabel()
{
    interfaceLabelIsSet_ = false;
}

int32_t BasicAwRes::getIsFavorite() const
{
    return isFavorite_;
}

void BasicAwRes::setIsFavorite(int32_t value)
{
    isFavorite_ = value;
    isFavoriteIsSet_ = true;
}

bool BasicAwRes::isFavoriteIsSet() const
{
    return isFavoriteIsSet_;
}

void BasicAwRes::unsetisFavorite()
{
    isFavoriteIsSet_ = false;
}

std::string BasicAwRes::getMethod() const
{
    return method_;
}

void BasicAwRes::setMethod(const std::string& value)
{
    method_ = value;
    methodIsSet_ = true;
}

bool BasicAwRes::methodIsSet() const
{
    return methodIsSet_;
}

void BasicAwRes::unsetmethod()
{
    methodIsSet_ = false;
}

std::string BasicAwRes::getName() const
{
    return name_;
}

void BasicAwRes::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BasicAwRes::nameIsSet() const
{
    return nameIsSet_;
}

void BasicAwRes::unsetname()
{
    nameIsSet_ = false;
}

std::string BasicAwRes::getNameView() const
{
    return nameView_;
}

void BasicAwRes::setNameView(const std::string& value)
{
    nameView_ = value;
    nameViewIsSet_ = true;
}

bool BasicAwRes::nameViewIsSet() const
{
    return nameViewIsSet_;
}

void BasicAwRes::unsetnameView()
{
    nameViewIsSet_ = false;
}

std::string BasicAwRes::getOriginProject() const
{
    return originProject_;
}

void BasicAwRes::setOriginProject(const std::string& value)
{
    originProject_ = value;
    originProjectIsSet_ = true;
}

bool BasicAwRes::originProjectIsSet() const
{
    return originProjectIsSet_;
}

void BasicAwRes::unsetoriginProject()
{
    originProjectIsSet_ = false;
}

std::vector<Object>& BasicAwRes::getParamTypeAndDftValue()
{
    return paramTypeAndDftValue_;
}

void BasicAwRes::setParamTypeAndDftValue(const std::vector<Object>& value)
{
    paramTypeAndDftValue_ = value;
    paramTypeAndDftValueIsSet_ = true;
}

bool BasicAwRes::paramTypeAndDftValueIsSet() const
{
    return paramTypeAndDftValueIsSet_;
}

void BasicAwRes::unsetparamTypeAndDftValue()
{
    paramTypeAndDftValueIsSet_ = false;
}

std::string BasicAwRes::getProjectId() const
{
    return projectId_;
}

void BasicAwRes::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BasicAwRes::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BasicAwRes::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string BasicAwRes::getProtocolType() const
{
    return protocolType_;
}

void BasicAwRes::setProtocolType(const std::string& value)
{
    protocolType_ = value;
    protocolTypeIsSet_ = true;
}

bool BasicAwRes::protocolTypeIsSet() const
{
    return protocolTypeIsSet_;
}

void BasicAwRes::unsetprotocolType()
{
    protocolTypeIsSet_ = false;
}

Object BasicAwRes::getPublicAwLib() const
{
    return publicAwLib_;
}

void BasicAwRes::setPublicAwLib(const Object& value)
{
    publicAwLib_ = value;
    publicAwLibIsSet_ = true;
}

bool BasicAwRes::publicAwLibIsSet() const
{
    return publicAwLibIsSet_;
}

void BasicAwRes::unsetpublicAwLib()
{
    publicAwLibIsSet_ = false;
}

std::string BasicAwRes::getPublicAwLibId() const
{
    return publicAwLibId_;
}

void BasicAwRes::setPublicAwLibId(const std::string& value)
{
    publicAwLibId_ = value;
    publicAwLibIdIsSet_ = true;
}

bool BasicAwRes::publicAwLibIdIsSet() const
{
    return publicAwLibIdIsSet_;
}

void BasicAwRes::unsetpublicAwLibId()
{
    publicAwLibIdIsSet_ = false;
}

std::string BasicAwRes::getRegion() const
{
    return region_;
}

void BasicAwRes::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool BasicAwRes::regionIsSet() const
{
    return regionIsSet_;
}

void BasicAwRes::unsetregion()
{
    regionIsSet_ = false;
}

std::string BasicAwRes::getReturnType() const
{
    return returnType_;
}

void BasicAwRes::setReturnType(const std::string& value)
{
    returnType_ = value;
    returnTypeIsSet_ = true;
}

bool BasicAwRes::returnTypeIsSet() const
{
    return returnTypeIsSet_;
}

void BasicAwRes::unsetreturnType()
{
    returnTypeIsSet_ = false;
}

std::string BasicAwRes::getRootId() const
{
    return rootId_;
}

void BasicAwRes::setRootId(const std::string& value)
{
    rootId_ = value;
    rootIdIsSet_ = true;
}

bool BasicAwRes::rootIdIsSet() const
{
    return rootIdIsSet_;
}

void BasicAwRes::unsetrootId()
{
    rootIdIsSet_ = false;
}

std::string BasicAwRes::getSource() const
{
    return source_;
}

void BasicAwRes::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool BasicAwRes::sourceIsSet() const
{
    return sourceIsSet_;
}

void BasicAwRes::unsetsource()
{
    sourceIsSet_ = false;
}

int32_t BasicAwRes::getSpecialType() const
{
    return specialType_;
}

void BasicAwRes::setSpecialType(int32_t value)
{
    specialType_ = value;
    specialTypeIsSet_ = true;
}

bool BasicAwRes::specialTypeIsSet() const
{
    return specialTypeIsSet_;
}

void BasicAwRes::unsetspecialType()
{
    specialTypeIsSet_ = false;
}

std::string BasicAwRes::getTmssCaseNumber() const
{
    return tmssCaseNumber_;
}

void BasicAwRes::setTmssCaseNumber(const std::string& value)
{
    tmssCaseNumber_ = value;
    tmssCaseNumberIsSet_ = true;
}

bool BasicAwRes::tmssCaseNumberIsSet() const
{
    return tmssCaseNumberIsSet_;
}

void BasicAwRes::unsettmssCaseNumber()
{
    tmssCaseNumberIsSet_ = false;
}

std::string BasicAwRes::getTmssCaseId() const
{
    return tmssCaseId_;
}

void BasicAwRes::setTmssCaseId(const std::string& value)
{
    tmssCaseId_ = value;
    tmssCaseIdIsSet_ = true;
}

bool BasicAwRes::tmssCaseIdIsSet() const
{
    return tmssCaseIdIsSet_;
}

void BasicAwRes::unsettmssCaseId()
{
    tmssCaseIdIsSet_ = false;
}

std::string BasicAwRes::getUpdateTime() const
{
    return updateTime_;
}

void BasicAwRes::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool BasicAwRes::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void BasicAwRes::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

int64_t BasicAwRes::getUpdateTimeStamp() const
{
    return updateTimeStamp_;
}

void BasicAwRes::setUpdateTimeStamp(int64_t value)
{
    updateTimeStamp_ = value;
    updateTimeStampIsSet_ = true;
}

bool BasicAwRes::updateTimeStampIsSet() const
{
    return updateTimeStampIsSet_;
}

void BasicAwRes::unsetupdateTimeStamp()
{
    updateTimeStampIsSet_ = false;
}

std::string BasicAwRes::getUpdateTimeString() const
{
    return updateTimeString_;
}

void BasicAwRes::setUpdateTimeString(const std::string& value)
{
    updateTimeString_ = value;
    updateTimeStringIsSet_ = true;
}

bool BasicAwRes::updateTimeStringIsSet() const
{
    return updateTimeStringIsSet_;
}

void BasicAwRes::unsetupdateTimeString()
{
    updateTimeStringIsSet_ = false;
}

std::string BasicAwRes::getUpdateUser() const
{
    return updateUser_;
}

void BasicAwRes::setUpdateUser(const std::string& value)
{
    updateUser_ = value;
    updateUserIsSet_ = true;
}

bool BasicAwRes::updateUserIsSet() const
{
    return updateUserIsSet_;
}

void BasicAwRes::unsetupdateUser()
{
    updateUserIsSet_ = false;
}

std::string BasicAwRes::getWarningMsg() const
{
    return warningMsg_;
}

void BasicAwRes::setWarningMsg(const std::string& value)
{
    warningMsg_ = value;
    warningMsgIsSet_ = true;
}

bool BasicAwRes::warningMsgIsSet() const
{
    return warningMsgIsSet_;
}

void BasicAwRes::unsetwarningMsg()
{
    warningMsgIsSet_ = false;
}

std::string BasicAwRes::getYamlName() const
{
    return yamlName_;
}

void BasicAwRes::setYamlName(const std::string& value)
{
    yamlName_ = value;
    yamlNameIsSet_ = true;
}

bool BasicAwRes::yamlNameIsSet() const
{
    return yamlNameIsSet_;
}

void BasicAwRes::unsetyamlName()
{
    yamlNameIsSet_ = false;
}

}
}
}
}
}


