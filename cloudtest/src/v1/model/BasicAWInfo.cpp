

#include "huaweicloud/cloudtest/v1/model/BasicAWInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BasicAWInfo::BasicAWInfo()
{
    awCode_ = "";
    awCodeIsSet_ = false;
    awDescription_ = "";
    awDescriptionIsSet_ = false;
    awInsListIsSet_ = false;
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
    cataType_ = 0;
    cataTypeIsSet_ = false;
    childListIsSet_ = false;
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
    customAwLibsIsSet_ = false;
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
    isFolder_ = "";
    isFolderIsSet_ = false;
    keywordVariableValueIsSet_ = false;
    method_ = "";
    methodIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    nameView_ = "";
    nameViewIsSet_ = false;
    originProject_ = "";
    originProjectIsSet_ = false;
    outputParamListIsSet_ = false;
    pageNo_ = 0;
    pageNoIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    paramTypeAndDftValueIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
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
    totalPage_ = 0;
    totalPageIsSet_ = false;
    totalSize_ = 0;
    totalSizeIsSet_ = false;
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

BasicAWInfo::~BasicAWInfo() = default;

void BasicAWInfo::validate()
{
}

web::json::value BasicAWInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(awCodeIsSet_) {
        val[utility::conversions::to_string_t("aw_code")] = ModelBase::toJson(awCode_);
    }
    if(awDescriptionIsSet_) {
        val[utility::conversions::to_string_t("aw_description")] = ModelBase::toJson(awDescription_);
    }
    if(awInsListIsSet_) {
        val[utility::conversions::to_string_t("aw_ins_list")] = ModelBase::toJson(awInsList_);
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
    if(cataTypeIsSet_) {
        val[utility::conversions::to_string_t("cata_type")] = ModelBase::toJson(cataType_);
    }
    if(childListIsSet_) {
        val[utility::conversions::to_string_t("child_list")] = ModelBase::toJson(*childList_);
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
    if(customAwLibsIsSet_) {
        val[utility::conversions::to_string_t("custom_aw_libs")] = ModelBase::toJson(customAwLibs_);
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
    if(isFolderIsSet_) {
        val[utility::conversions::to_string_t("is_folder")] = ModelBase::toJson(isFolder_);
    }
    if(keywordVariableValueIsSet_) {
        val[utility::conversions::to_string_t("keyword_variable_value")] = ModelBase::toJson(keywordVariableValue_);
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
    if(outputParamListIsSet_) {
        val[utility::conversions::to_string_t("output_param_list")] = ModelBase::toJson(outputParamList_);
    }
    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(paramTypeAndDftValueIsSet_) {
        val[utility::conversions::to_string_t("param_type_and_dft_value")] = ModelBase::toJson(paramTypeAndDftValue_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
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
    if(totalPageIsSet_) {
        val[utility::conversions::to_string_t("total_page")] = ModelBase::toJson(totalPage_);
    }
    if(totalSizeIsSet_) {
        val[utility::conversions::to_string_t("total_size")] = ModelBase::toJson(totalSize_);
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
bool BasicAWInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("aw_ins_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("aw_ins_list"));
        if(!fieldValue.is_null())
        {
            std::vector<AwInstanceRes> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAwInsList(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("cata_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cata_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCataType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("child_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("child_list"));
        if(!fieldValue.is_null())
        {
            std::vector<BasicAWInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChildList(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("custom_aw_libs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_aw_libs"));
        if(!fieldValue.is_null())
        {
            std::vector<UploadFileRes> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomAwLibs(refVal);
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
            std::vector<CheckPoint> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDftCheckPointList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dft_custom_header"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dft_custom_header"));
        if(!fieldValue.is_null())
        {
            std::vector<AwParam> refVal;
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
            std::vector<AwVariable> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDftVariableList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extra_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extra_info"));
        if(!fieldValue.is_null())
        {
            JsonNode refVal;
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
    if(val.has_field(utility::conversions::to_string_t("is_folder"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_folder"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsFolder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keyword_variable_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keyword_variable_value"));
        if(!fieldValue.is_null())
        {
            std::vector<AwVariable> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeywordVariableValue(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("output_param_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_param_list"));
        if(!fieldValue.is_null())
        {
            std::vector<AwVariable> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputParamList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_no"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("param_type_and_dft_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("param_type_and_dft_value"));
        if(!fieldValue.is_null())
        {
            std::vector<AwParam> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParamTypeAndDftValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
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
            PublicAwLibRes refVal;
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
    if(val.has_field(utility::conversions::to_string_t("total_page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalSize(refVal);
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


std::string BasicAWInfo::getAwCode() const
{
    return awCode_;
}

void BasicAWInfo::setAwCode(const std::string& value)
{
    awCode_ = value;
    awCodeIsSet_ = true;
}

bool BasicAWInfo::awCodeIsSet() const
{
    return awCodeIsSet_;
}

void BasicAWInfo::unsetawCode()
{
    awCodeIsSet_ = false;
}

std::string BasicAWInfo::getAwDescription() const
{
    return awDescription_;
}

void BasicAWInfo::setAwDescription(const std::string& value)
{
    awDescription_ = value;
    awDescriptionIsSet_ = true;
}

bool BasicAWInfo::awDescriptionIsSet() const
{
    return awDescriptionIsSet_;
}

void BasicAWInfo::unsetawDescription()
{
    awDescriptionIsSet_ = false;
}

std::vector<AwInstanceRes>& BasicAWInfo::getAwInsList()
{
    return awInsList_;
}

void BasicAWInfo::setAwInsList(const std::vector<AwInstanceRes>& value)
{
    awInsList_ = value;
    awInsListIsSet_ = true;
}

bool BasicAWInfo::awInsListIsSet() const
{
    return awInsListIsSet_;
}

void BasicAWInfo::unsetawInsList()
{
    awInsListIsSet_ = false;
}

int32_t BasicAWInfo::getAwMark() const
{
    return awMark_;
}

void BasicAWInfo::setAwMark(int32_t value)
{
    awMark_ = value;
    awMarkIsSet_ = true;
}

bool BasicAWInfo::awMarkIsSet() const
{
    return awMarkIsSet_;
}

void BasicAWInfo::unsetawMark()
{
    awMarkIsSet_ = false;
}

std::string BasicAWInfo::getAwOperationid() const
{
    return awOperationid_;
}

void BasicAWInfo::setAwOperationid(const std::string& value)
{
    awOperationid_ = value;
    awOperationidIsSet_ = true;
}

bool BasicAWInfo::awOperationidIsSet() const
{
    return awOperationidIsSet_;
}

void BasicAWInfo::unsetawOperationid()
{
    awOperationidIsSet_ = false;
}

std::string BasicAWInfo::getAwTags() const
{
    return awTags_;
}

void BasicAWInfo::setAwTags(const std::string& value)
{
    awTags_ = value;
    awTagsIsSet_ = true;
}

bool BasicAWInfo::awTagsIsSet() const
{
    return awTagsIsSet_;
}

void BasicAWInfo::unsetawTags()
{
    awTagsIsSet_ = false;
}

int32_t BasicAWInfo::getAwType() const
{
    return awType_;
}

void BasicAWInfo::setAwType(int32_t value)
{
    awType_ = value;
    awTypeIsSet_ = true;
}

bool BasicAWInfo::awTypeIsSet() const
{
    return awTypeIsSet_;
}

void BasicAWInfo::unsetawType()
{
    awTypeIsSet_ = false;
}

std::string BasicAWInfo::getAwUniqueid() const
{
    return awUniqueid_;
}

void BasicAWInfo::setAwUniqueid(const std::string& value)
{
    awUniqueid_ = value;
    awUniqueidIsSet_ = true;
}

bool BasicAWInfo::awUniqueidIsSet() const
{
    return awUniqueidIsSet_;
}

void BasicAWInfo::unsetawUniqueid()
{
    awUniqueidIsSet_ = false;
}

int32_t BasicAWInfo::getByOrder() const
{
    return byOrder_;
}

void BasicAWInfo::setByOrder(int32_t value)
{
    byOrder_ = value;
    byOrderIsSet_ = true;
}

bool BasicAWInfo::byOrderIsSet() const
{
    return byOrderIsSet_;
}

void BasicAWInfo::unsetbyOrder()
{
    byOrderIsSet_ = false;
}

int32_t BasicAWInfo::getCataType() const
{
    return cataType_;
}

void BasicAWInfo::setCataType(int32_t value)
{
    cataType_ = value;
    cataTypeIsSet_ = true;
}

bool BasicAWInfo::cataTypeIsSet() const
{
    return cataTypeIsSet_;
}

void BasicAWInfo::unsetcataType()
{
    cataTypeIsSet_ = false;
}

std::vector<BasicAWInfo>& BasicAWInfo::getChildList()
{
    return *childList_;
}

void BasicAWInfo::setChildList(const std::vector<BasicAWInfo>& value)
{
    *childList_ = value;
    childListIsSet_ = true;
}

bool BasicAWInfo::childListIsSet() const
{
    return childListIsSet_;
}

void BasicAWInfo::unsetchildList()
{
    childListIsSet_ = false;
}

std::string BasicAWInfo::getCreateTime() const
{
    return createTime_;
}

void BasicAWInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool BasicAWInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void BasicAWInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t BasicAWInfo::getCreateTimeStamp() const
{
    return createTimeStamp_;
}

void BasicAWInfo::setCreateTimeStamp(int64_t value)
{
    createTimeStamp_ = value;
    createTimeStampIsSet_ = true;
}

bool BasicAWInfo::createTimeStampIsSet() const
{
    return createTimeStampIsSet_;
}

void BasicAWInfo::unsetcreateTimeStamp()
{
    createTimeStampIsSet_ = false;
}

std::string BasicAWInfo::getCreateTimeString() const
{
    return createTimeString_;
}

void BasicAWInfo::setCreateTimeString(const std::string& value)
{
    createTimeString_ = value;
    createTimeStringIsSet_ = true;
}

bool BasicAWInfo::createTimeStringIsSet() const
{
    return createTimeStringIsSet_;
}

void BasicAWInfo::unsetcreateTimeString()
{
    createTimeStringIsSet_ = false;
}

std::string BasicAWInfo::getCreateUser() const
{
    return createUser_;
}

void BasicAWInfo::setCreateUser(const std::string& value)
{
    createUser_ = value;
    createUserIsSet_ = true;
}

bool BasicAWInfo::createUserIsSet() const
{
    return createUserIsSet_;
}

void BasicAWInfo::unsetcreateUser()
{
    createUserIsSet_ = false;
}

std::string BasicAWInfo::getCreateUserId() const
{
    return createUserId_;
}

void BasicAWInfo::setCreateUserId(const std::string& value)
{
    createUserId_ = value;
    createUserIdIsSet_ = true;
}

bool BasicAWInfo::createUserIdIsSet() const
{
    return createUserIdIsSet_;
}

void BasicAWInfo::unsetcreateUserId()
{
    createUserIdIsSet_ = false;
}

std::vector<UploadFileRes>& BasicAWInfo::getCustomAwLibs()
{
    return customAwLibs_;
}

void BasicAWInfo::setCustomAwLibs(const std::vector<UploadFileRes>& value)
{
    customAwLibs_ = value;
    customAwLibsIsSet_ = true;
}

bool BasicAWInfo::customAwLibsIsSet() const
{
    return customAwLibsIsSet_;
}

void BasicAWInfo::unsetcustomAwLibs()
{
    customAwLibsIsSet_ = false;
}

std::string BasicAWInfo::getDeleteTime() const
{
    return deleteTime_;
}

void BasicAWInfo::setDeleteTime(const std::string& value)
{
    deleteTime_ = value;
    deleteTimeIsSet_ = true;
}

bool BasicAWInfo::deleteTimeIsSet() const
{
    return deleteTimeIsSet_;
}

void BasicAWInfo::unsetdeleteTime()
{
    deleteTimeIsSet_ = false;
}

std::string BasicAWInfo::getDeleteUser() const
{
    return deleteUser_;
}

void BasicAWInfo::setDeleteUser(const std::string& value)
{
    deleteUser_ = value;
    deleteUserIsSet_ = true;
}

bool BasicAWInfo::deleteUserIsSet() const
{
    return deleteUserIsSet_;
}

void BasicAWInfo::unsetdeleteUser()
{
    deleteUserIsSet_ = false;
}

std::string BasicAWInfo::getDescription() const
{
    return description_;
}

void BasicAWInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool BasicAWInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void BasicAWInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<CheckPoint>& BasicAWInfo::getDftCheckPointList()
{
    return dftCheckPointList_;
}

void BasicAWInfo::setDftCheckPointList(const std::vector<CheckPoint>& value)
{
    dftCheckPointList_ = value;
    dftCheckPointListIsSet_ = true;
}

bool BasicAWInfo::dftCheckPointListIsSet() const
{
    return dftCheckPointListIsSet_;
}

void BasicAWInfo::unsetdftCheckPointList()
{
    dftCheckPointListIsSet_ = false;
}

std::vector<AwParam>& BasicAWInfo::getDftCustomHeader()
{
    return dftCustomHeader_;
}

void BasicAWInfo::setDftCustomHeader(const std::vector<AwParam>& value)
{
    dftCustomHeader_ = value;
    dftCustomHeaderIsSet_ = true;
}

bool BasicAWInfo::dftCustomHeaderIsSet() const
{
    return dftCustomHeaderIsSet_;
}

void BasicAWInfo::unsetdftCustomHeader()
{
    dftCustomHeaderIsSet_ = false;
}

std::string BasicAWInfo::getDftRetryInterval() const
{
    return dftRetryInterval_;
}

void BasicAWInfo::setDftRetryInterval(const std::string& value)
{
    dftRetryInterval_ = value;
    dftRetryIntervalIsSet_ = true;
}

bool BasicAWInfo::dftRetryIntervalIsSet() const
{
    return dftRetryIntervalIsSet_;
}

void BasicAWInfo::unsetdftRetryInterval()
{
    dftRetryIntervalIsSet_ = false;
}

std::string BasicAWInfo::getDftRetryTimes() const
{
    return dftRetryTimes_;
}

void BasicAWInfo::setDftRetryTimes(const std::string& value)
{
    dftRetryTimes_ = value;
    dftRetryTimesIsSet_ = true;
}

bool BasicAWInfo::dftRetryTimesIsSet() const
{
    return dftRetryTimesIsSet_;
}

void BasicAWInfo::unsetdftRetryTimes()
{
    dftRetryTimesIsSet_ = false;
}

std::vector<AwVariable>& BasicAWInfo::getDftVariableList()
{
    return dftVariableList_;
}

void BasicAWInfo::setDftVariableList(const std::vector<AwVariable>& value)
{
    dftVariableList_ = value;
    dftVariableListIsSet_ = true;
}

bool BasicAWInfo::dftVariableListIsSet() const
{
    return dftVariableListIsSet_;
}

void BasicAWInfo::unsetdftVariableList()
{
    dftVariableListIsSet_ = false;
}

JsonNode BasicAWInfo::getExtraInfo() const
{
    return extraInfo_;
}

void BasicAWInfo::setExtraInfo(const JsonNode& value)
{
    extraInfo_ = value;
    extraInfoIsSet_ = true;
}

bool BasicAWInfo::extraInfoIsSet() const
{
    return extraInfoIsSet_;
}

void BasicAWInfo::unsetextraInfo()
{
    extraInfoIsSet_ = false;
}

std::string BasicAWInfo::getGroupName() const
{
    return groupName_;
}

void BasicAWInfo::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool BasicAWInfo::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void BasicAWInfo::unsetgroupName()
{
    groupNameIsSet_ = false;
}

int32_t BasicAWInfo::getHasCode() const
{
    return hasCode_;
}

void BasicAWInfo::setHasCode(int32_t value)
{
    hasCode_ = value;
    hasCodeIsSet_ = true;
}

bool BasicAWInfo::hasCodeIsSet() const
{
    return hasCodeIsSet_;
}

void BasicAWInfo::unsethasCode()
{
    hasCodeIsSet_ = false;
}

std::string BasicAWInfo::getId() const
{
    return id_;
}

void BasicAWInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BasicAWInfo::idIsSet() const
{
    return idIsSet_;
}

void BasicAWInfo::unsetid()
{
    idIsSet_ = false;
}

std::vector<std::string>& BasicAWInfo::getImportPackage()
{
    return importPackage_;
}

void BasicAWInfo::setImportPackage(const std::vector<std::string>& value)
{
    importPackage_ = value;
    importPackageIsSet_ = true;
}

bool BasicAWInfo::importPackageIsSet() const
{
    return importPackageIsSet_;
}

void BasicAWInfo::unsetimportPackage()
{
    importPackageIsSet_ = false;
}

std::string BasicAWInfo::getInterfaceLabel() const
{
    return interfaceLabel_;
}

void BasicAWInfo::setInterfaceLabel(const std::string& value)
{
    interfaceLabel_ = value;
    interfaceLabelIsSet_ = true;
}

bool BasicAWInfo::interfaceLabelIsSet() const
{
    return interfaceLabelIsSet_;
}

void BasicAWInfo::unsetinterfaceLabel()
{
    interfaceLabelIsSet_ = false;
}

int32_t BasicAWInfo::getIsFavorite() const
{
    return isFavorite_;
}

void BasicAWInfo::setIsFavorite(int32_t value)
{
    isFavorite_ = value;
    isFavoriteIsSet_ = true;
}

bool BasicAWInfo::isFavoriteIsSet() const
{
    return isFavoriteIsSet_;
}

void BasicAWInfo::unsetisFavorite()
{
    isFavoriteIsSet_ = false;
}

std::string BasicAWInfo::getIsFolder() const
{
    return isFolder_;
}

void BasicAWInfo::setIsFolder(const std::string& value)
{
    isFolder_ = value;
    isFolderIsSet_ = true;
}

bool BasicAWInfo::isFolderIsSet() const
{
    return isFolderIsSet_;
}

void BasicAWInfo::unsetisFolder()
{
    isFolderIsSet_ = false;
}

std::vector<AwVariable>& BasicAWInfo::getKeywordVariableValue()
{
    return keywordVariableValue_;
}

void BasicAWInfo::setKeywordVariableValue(const std::vector<AwVariable>& value)
{
    keywordVariableValue_ = value;
    keywordVariableValueIsSet_ = true;
}

bool BasicAWInfo::keywordVariableValueIsSet() const
{
    return keywordVariableValueIsSet_;
}

void BasicAWInfo::unsetkeywordVariableValue()
{
    keywordVariableValueIsSet_ = false;
}

std::string BasicAWInfo::getMethod() const
{
    return method_;
}

void BasicAWInfo::setMethod(const std::string& value)
{
    method_ = value;
    methodIsSet_ = true;
}

bool BasicAWInfo::methodIsSet() const
{
    return methodIsSet_;
}

void BasicAWInfo::unsetmethod()
{
    methodIsSet_ = false;
}

std::string BasicAWInfo::getName() const
{
    return name_;
}

void BasicAWInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BasicAWInfo::nameIsSet() const
{
    return nameIsSet_;
}

void BasicAWInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string BasicAWInfo::getNameView() const
{
    return nameView_;
}

void BasicAWInfo::setNameView(const std::string& value)
{
    nameView_ = value;
    nameViewIsSet_ = true;
}

bool BasicAWInfo::nameViewIsSet() const
{
    return nameViewIsSet_;
}

void BasicAWInfo::unsetnameView()
{
    nameViewIsSet_ = false;
}

std::string BasicAWInfo::getOriginProject() const
{
    return originProject_;
}

void BasicAWInfo::setOriginProject(const std::string& value)
{
    originProject_ = value;
    originProjectIsSet_ = true;
}

bool BasicAWInfo::originProjectIsSet() const
{
    return originProjectIsSet_;
}

void BasicAWInfo::unsetoriginProject()
{
    originProjectIsSet_ = false;
}

std::vector<AwVariable>& BasicAWInfo::getOutputParamList()
{
    return outputParamList_;
}

void BasicAWInfo::setOutputParamList(const std::vector<AwVariable>& value)
{
    outputParamList_ = value;
    outputParamListIsSet_ = true;
}

bool BasicAWInfo::outputParamListIsSet() const
{
    return outputParamListIsSet_;
}

void BasicAWInfo::unsetoutputParamList()
{
    outputParamListIsSet_ = false;
}

int32_t BasicAWInfo::getPageNo() const
{
    return pageNo_;
}

void BasicAWInfo::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool BasicAWInfo::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void BasicAWInfo::unsetpageNo()
{
    pageNoIsSet_ = false;
}

int32_t BasicAWInfo::getPageSize() const
{
    return pageSize_;
}

void BasicAWInfo::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool BasicAWInfo::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void BasicAWInfo::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::vector<AwParam>& BasicAWInfo::getParamTypeAndDftValue()
{
    return paramTypeAndDftValue_;
}

void BasicAWInfo::setParamTypeAndDftValue(const std::vector<AwParam>& value)
{
    paramTypeAndDftValue_ = value;
    paramTypeAndDftValueIsSet_ = true;
}

bool BasicAWInfo::paramTypeAndDftValueIsSet() const
{
    return paramTypeAndDftValueIsSet_;
}

void BasicAWInfo::unsetparamTypeAndDftValue()
{
    paramTypeAndDftValueIsSet_ = false;
}

std::string BasicAWInfo::getParentId() const
{
    return parentId_;
}

void BasicAWInfo::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool BasicAWInfo::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void BasicAWInfo::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::string BasicAWInfo::getProjectId() const
{
    return projectId_;
}

void BasicAWInfo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BasicAWInfo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BasicAWInfo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string BasicAWInfo::getProtocolType() const
{
    return protocolType_;
}

void BasicAWInfo::setProtocolType(const std::string& value)
{
    protocolType_ = value;
    protocolTypeIsSet_ = true;
}

bool BasicAWInfo::protocolTypeIsSet() const
{
    return protocolTypeIsSet_;
}

void BasicAWInfo::unsetprotocolType()
{
    protocolTypeIsSet_ = false;
}

PublicAwLibRes BasicAWInfo::getPublicAwLib() const
{
    return publicAwLib_;
}

void BasicAWInfo::setPublicAwLib(const PublicAwLibRes& value)
{
    publicAwLib_ = value;
    publicAwLibIsSet_ = true;
}

bool BasicAWInfo::publicAwLibIsSet() const
{
    return publicAwLibIsSet_;
}

void BasicAWInfo::unsetpublicAwLib()
{
    publicAwLibIsSet_ = false;
}

std::string BasicAWInfo::getPublicAwLibId() const
{
    return publicAwLibId_;
}

void BasicAWInfo::setPublicAwLibId(const std::string& value)
{
    publicAwLibId_ = value;
    publicAwLibIdIsSet_ = true;
}

bool BasicAWInfo::publicAwLibIdIsSet() const
{
    return publicAwLibIdIsSet_;
}

void BasicAWInfo::unsetpublicAwLibId()
{
    publicAwLibIdIsSet_ = false;
}

std::string BasicAWInfo::getRegion() const
{
    return region_;
}

void BasicAWInfo::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool BasicAWInfo::regionIsSet() const
{
    return regionIsSet_;
}

void BasicAWInfo::unsetregion()
{
    regionIsSet_ = false;
}

std::string BasicAWInfo::getReturnType() const
{
    return returnType_;
}

void BasicAWInfo::setReturnType(const std::string& value)
{
    returnType_ = value;
    returnTypeIsSet_ = true;
}

bool BasicAWInfo::returnTypeIsSet() const
{
    return returnTypeIsSet_;
}

void BasicAWInfo::unsetreturnType()
{
    returnTypeIsSet_ = false;
}

std::string BasicAWInfo::getRootId() const
{
    return rootId_;
}

void BasicAWInfo::setRootId(const std::string& value)
{
    rootId_ = value;
    rootIdIsSet_ = true;
}

bool BasicAWInfo::rootIdIsSet() const
{
    return rootIdIsSet_;
}

void BasicAWInfo::unsetrootId()
{
    rootIdIsSet_ = false;
}

std::string BasicAWInfo::getSource() const
{
    return source_;
}

void BasicAWInfo::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool BasicAWInfo::sourceIsSet() const
{
    return sourceIsSet_;
}

void BasicAWInfo::unsetsource()
{
    sourceIsSet_ = false;
}

int32_t BasicAWInfo::getSpecialType() const
{
    return specialType_;
}

void BasicAWInfo::setSpecialType(int32_t value)
{
    specialType_ = value;
    specialTypeIsSet_ = true;
}

bool BasicAWInfo::specialTypeIsSet() const
{
    return specialTypeIsSet_;
}

void BasicAWInfo::unsetspecialType()
{
    specialTypeIsSet_ = false;
}

std::string BasicAWInfo::getTmssCaseNumber() const
{
    return tmssCaseNumber_;
}

void BasicAWInfo::setTmssCaseNumber(const std::string& value)
{
    tmssCaseNumber_ = value;
    tmssCaseNumberIsSet_ = true;
}

bool BasicAWInfo::tmssCaseNumberIsSet() const
{
    return tmssCaseNumberIsSet_;
}

void BasicAWInfo::unsettmssCaseNumber()
{
    tmssCaseNumberIsSet_ = false;
}

std::string BasicAWInfo::getTmssCaseId() const
{
    return tmssCaseId_;
}

void BasicAWInfo::setTmssCaseId(const std::string& value)
{
    tmssCaseId_ = value;
    tmssCaseIdIsSet_ = true;
}

bool BasicAWInfo::tmssCaseIdIsSet() const
{
    return tmssCaseIdIsSet_;
}

void BasicAWInfo::unsettmssCaseId()
{
    tmssCaseIdIsSet_ = false;
}

int32_t BasicAWInfo::getTotalPage() const
{
    return totalPage_;
}

void BasicAWInfo::setTotalPage(int32_t value)
{
    totalPage_ = value;
    totalPageIsSet_ = true;
}

bool BasicAWInfo::totalPageIsSet() const
{
    return totalPageIsSet_;
}

void BasicAWInfo::unsettotalPage()
{
    totalPageIsSet_ = false;
}

int32_t BasicAWInfo::getTotalSize() const
{
    return totalSize_;
}

void BasicAWInfo::setTotalSize(int32_t value)
{
    totalSize_ = value;
    totalSizeIsSet_ = true;
}

bool BasicAWInfo::totalSizeIsSet() const
{
    return totalSizeIsSet_;
}

void BasicAWInfo::unsettotalSize()
{
    totalSizeIsSet_ = false;
}

std::string BasicAWInfo::getUpdateTime() const
{
    return updateTime_;
}

void BasicAWInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool BasicAWInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void BasicAWInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

int64_t BasicAWInfo::getUpdateTimeStamp() const
{
    return updateTimeStamp_;
}

void BasicAWInfo::setUpdateTimeStamp(int64_t value)
{
    updateTimeStamp_ = value;
    updateTimeStampIsSet_ = true;
}

bool BasicAWInfo::updateTimeStampIsSet() const
{
    return updateTimeStampIsSet_;
}

void BasicAWInfo::unsetupdateTimeStamp()
{
    updateTimeStampIsSet_ = false;
}

std::string BasicAWInfo::getUpdateTimeString() const
{
    return updateTimeString_;
}

void BasicAWInfo::setUpdateTimeString(const std::string& value)
{
    updateTimeString_ = value;
    updateTimeStringIsSet_ = true;
}

bool BasicAWInfo::updateTimeStringIsSet() const
{
    return updateTimeStringIsSet_;
}

void BasicAWInfo::unsetupdateTimeString()
{
    updateTimeStringIsSet_ = false;
}

std::string BasicAWInfo::getUpdateUser() const
{
    return updateUser_;
}

void BasicAWInfo::setUpdateUser(const std::string& value)
{
    updateUser_ = value;
    updateUserIsSet_ = true;
}

bool BasicAWInfo::updateUserIsSet() const
{
    return updateUserIsSet_;
}

void BasicAWInfo::unsetupdateUser()
{
    updateUserIsSet_ = false;
}

std::string BasicAWInfo::getWarningMsg() const
{
    return warningMsg_;
}

void BasicAWInfo::setWarningMsg(const std::string& value)
{
    warningMsg_ = value;
    warningMsgIsSet_ = true;
}

bool BasicAWInfo::warningMsgIsSet() const
{
    return warningMsgIsSet_;
}

void BasicAWInfo::unsetwarningMsg()
{
    warningMsgIsSet_ = false;
}

std::string BasicAWInfo::getYamlName() const
{
    return yamlName_;
}

void BasicAWInfo::setYamlName(const std::string& value)
{
    yamlName_ = value;
    yamlNameIsSet_ = true;
}

bool BasicAWInfo::yamlNameIsSet() const
{
    return yamlNameIsSet_;
}

void BasicAWInfo::unsetyamlName()
{
    yamlNameIsSet_ = false;
}

}
}
}
}
}


