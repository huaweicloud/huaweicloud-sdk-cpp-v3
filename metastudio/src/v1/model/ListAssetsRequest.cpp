

#include "huaweicloud/metastudio/v1/model/ListAssetsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListAssetsRequest::ListAssetsRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    tag_ = "";
    tagIsSet_ = false;
    tagCombinationType_ = "";
    tagCombinationTypeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    assetType_ = "";
    assetTypeIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    assetSource_ = "";
    assetSourceIsSet_ = false;
    assetState_ = "";
    assetStateIsSet_ = false;
    styleId_ = "";
    styleIdIsSet_ = false;
    accurateQueryFieldIsSet_ = false;
    renderEngine_ = "";
    renderEngineIsSet_ = false;
    assetIdIsSet_ = false;
    sex_ = "";
    sexIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    systemProperty_ = "";
    systemPropertyIsSet_ = false;
    actionEditable_ = false;
    actionEditableIsSet_ = false;
    isWithActionLibrary_ = false;
    isWithActionLibraryIsSet_ = false;
    isMovable_ = false;
    isMovableIsSet_ = false;
    voiceProvider_ = "";
    voiceProviderIsSet_ = false;
    role_ = "";
    roleIsSet_ = false;
    isRealtimeVoice_ = false;
    isRealtimeVoiceIsSet_ = false;
    humanModel2dVersion_ = "";
    humanModel2dVersionIsSet_ = false;
    includeDeviceName_ = "";
    includeDeviceNameIsSet_ = false;
    excludeDeviceName_ = "";
    excludeDeviceNameIsSet_ = false;
    supportedService_ = "";
    supportedServiceIsSet_ = false;
    appUserId_ = "";
    appUserIdIsSet_ = false;
    projectGroupId_ = "";
    projectGroupIdIsSet_ = false;
}

ListAssetsRequest::~ListAssetsRequest() = default;

void ListAssetsRequest::validate()
{
}

web::json::value ListAssetsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(xAppUserIdIsSet_) {
        val[utility::conversions::to_string_t("X-App-UserId")] = ModelBase::toJson(xAppUserId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }
    if(tagCombinationTypeIsSet_) {
        val[utility::conversions::to_string_t("tag_combination_type")] = ModelBase::toJson(tagCombinationType_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(assetTypeIsSet_) {
        val[utility::conversions::to_string_t("asset_type")] = ModelBase::toJson(assetType_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(assetSourceIsSet_) {
        val[utility::conversions::to_string_t("asset_source")] = ModelBase::toJson(assetSource_);
    }
    if(assetStateIsSet_) {
        val[utility::conversions::to_string_t("asset_state")] = ModelBase::toJson(assetState_);
    }
    if(styleIdIsSet_) {
        val[utility::conversions::to_string_t("style_id")] = ModelBase::toJson(styleId_);
    }
    if(accurateQueryFieldIsSet_) {
        val[utility::conversions::to_string_t("accurate_query_field")] = ModelBase::toJson(accurateQueryField_);
    }
    if(renderEngineIsSet_) {
        val[utility::conversions::to_string_t("render_engine")] = ModelBase::toJson(renderEngine_);
    }
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(sexIsSet_) {
        val[utility::conversions::to_string_t("sex")] = ModelBase::toJson(sex_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(systemPropertyIsSet_) {
        val[utility::conversions::to_string_t("system_property")] = ModelBase::toJson(systemProperty_);
    }
    if(actionEditableIsSet_) {
        val[utility::conversions::to_string_t("action_editable")] = ModelBase::toJson(actionEditable_);
    }
    if(isWithActionLibraryIsSet_) {
        val[utility::conversions::to_string_t("is_with_action_library")] = ModelBase::toJson(isWithActionLibrary_);
    }
    if(isMovableIsSet_) {
        val[utility::conversions::to_string_t("is_movable")] = ModelBase::toJson(isMovable_);
    }
    if(voiceProviderIsSet_) {
        val[utility::conversions::to_string_t("voice_provider")] = ModelBase::toJson(voiceProvider_);
    }
    if(roleIsSet_) {
        val[utility::conversions::to_string_t("role")] = ModelBase::toJson(role_);
    }
    if(isRealtimeVoiceIsSet_) {
        val[utility::conversions::to_string_t("is_realtime_voice")] = ModelBase::toJson(isRealtimeVoice_);
    }
    if(humanModel2dVersionIsSet_) {
        val[utility::conversions::to_string_t("human_model_2d_version")] = ModelBase::toJson(humanModel2dVersion_);
    }
    if(includeDeviceNameIsSet_) {
        val[utility::conversions::to_string_t("include_device_name")] = ModelBase::toJson(includeDeviceName_);
    }
    if(excludeDeviceNameIsSet_) {
        val[utility::conversions::to_string_t("exclude_device_name")] = ModelBase::toJson(excludeDeviceName_);
    }
    if(supportedServiceIsSet_) {
        val[utility::conversions::to_string_t("supported_service")] = ModelBase::toJson(supportedService_);
    }
    if(appUserIdIsSet_) {
        val[utility::conversions::to_string_t("app_user_id")] = ModelBase::toJson(appUserId_);
    }
    if(projectGroupIdIsSet_) {
        val[utility::conversions::to_string_t("project_group_id")] = ModelBase::toJson(projectGroupId_);
    }

    return val;
}
bool ListAssetsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-App-UserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-App-UserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAppUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag_combination_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_combination_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagCombinationType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("style_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("style_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStyleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("accurate_query_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accurate_query_field"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccurateQueryField(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("render_engine"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("render_engine"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRenderEngine(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("system_property"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("system_property"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystemProperty(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action_editable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_editable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionEditable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_with_action_library"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_with_action_library"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsWithActionLibrary(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_movable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_movable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsMovable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("voice_provider"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("voice_provider"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVoiceProvider(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRole(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_realtime_voice"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_realtime_voice"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsRealtimeVoice(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("human_model_2d_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("human_model_2d_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHumanModel2dVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("include_device_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("include_device_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludeDeviceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exclude_device_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exclude_device_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExcludeDeviceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("supported_service"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("supported_service"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportedService(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectGroupId(refVal);
        }
    }
    return ok;
}


std::string ListAssetsRequest::getAuthorization() const
{
    return authorization_;
}

void ListAssetsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListAssetsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListAssetsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListAssetsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListAssetsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListAssetsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListAssetsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListAssetsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListAssetsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListAssetsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListAssetsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListAssetsRequest::getLimit() const
{
    return limit_;
}

void ListAssetsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAssetsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAssetsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListAssetsRequest::getOffset() const
{
    return offset_;
}

void ListAssetsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAssetsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAssetsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListAssetsRequest::getName() const
{
    return name_;
}

void ListAssetsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListAssetsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListAssetsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListAssetsRequest::getTag() const
{
    return tag_;
}

void ListAssetsRequest::setTag(const std::string& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool ListAssetsRequest::tagIsSet() const
{
    return tagIsSet_;
}

void ListAssetsRequest::unsettag()
{
    tagIsSet_ = false;
}

std::string ListAssetsRequest::getTagCombinationType() const
{
    return tagCombinationType_;
}

void ListAssetsRequest::setTagCombinationType(const std::string& value)
{
    tagCombinationType_ = value;
    tagCombinationTypeIsSet_ = true;
}

bool ListAssetsRequest::tagCombinationTypeIsSet() const
{
    return tagCombinationTypeIsSet_;
}

void ListAssetsRequest::unsettagCombinationType()
{
    tagCombinationTypeIsSet_ = false;
}

std::string ListAssetsRequest::getStartTime() const
{
    return startTime_;
}

void ListAssetsRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListAssetsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListAssetsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListAssetsRequest::getEndTime() const
{
    return endTime_;
}

void ListAssetsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListAssetsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListAssetsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListAssetsRequest::getAssetType() const
{
    return assetType_;
}

void ListAssetsRequest::setAssetType(const std::string& value)
{
    assetType_ = value;
    assetTypeIsSet_ = true;
}

bool ListAssetsRequest::assetTypeIsSet() const
{
    return assetTypeIsSet_;
}

void ListAssetsRequest::unsetassetType()
{
    assetTypeIsSet_ = false;
}

std::string ListAssetsRequest::getSortKey() const
{
    return sortKey_;
}

void ListAssetsRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListAssetsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListAssetsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListAssetsRequest::getSortDir() const
{
    return sortDir_;
}

void ListAssetsRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListAssetsRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListAssetsRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string ListAssetsRequest::getAssetSource() const
{
    return assetSource_;
}

void ListAssetsRequest::setAssetSource(const std::string& value)
{
    assetSource_ = value;
    assetSourceIsSet_ = true;
}

bool ListAssetsRequest::assetSourceIsSet() const
{
    return assetSourceIsSet_;
}

void ListAssetsRequest::unsetassetSource()
{
    assetSourceIsSet_ = false;
}

std::string ListAssetsRequest::getAssetState() const
{
    return assetState_;
}

void ListAssetsRequest::setAssetState(const std::string& value)
{
    assetState_ = value;
    assetStateIsSet_ = true;
}

bool ListAssetsRequest::assetStateIsSet() const
{
    return assetStateIsSet_;
}

void ListAssetsRequest::unsetassetState()
{
    assetStateIsSet_ = false;
}

std::string ListAssetsRequest::getStyleId() const
{
    return styleId_;
}

void ListAssetsRequest::setStyleId(const std::string& value)
{
    styleId_ = value;
    styleIdIsSet_ = true;
}

bool ListAssetsRequest::styleIdIsSet() const
{
    return styleIdIsSet_;
}

void ListAssetsRequest::unsetstyleId()
{
    styleIdIsSet_ = false;
}

std::vector<std::string>& ListAssetsRequest::getAccurateQueryField()
{
    return accurateQueryField_;
}

void ListAssetsRequest::setAccurateQueryField(const std::vector<std::string>& value)
{
    accurateQueryField_ = value;
    accurateQueryFieldIsSet_ = true;
}

bool ListAssetsRequest::accurateQueryFieldIsSet() const
{
    return accurateQueryFieldIsSet_;
}

void ListAssetsRequest::unsetaccurateQueryField()
{
    accurateQueryFieldIsSet_ = false;
}

std::string ListAssetsRequest::getRenderEngine() const
{
    return renderEngine_;
}

void ListAssetsRequest::setRenderEngine(const std::string& value)
{
    renderEngine_ = value;
    renderEngineIsSet_ = true;
}

bool ListAssetsRequest::renderEngineIsSet() const
{
    return renderEngineIsSet_;
}

void ListAssetsRequest::unsetrenderEngine()
{
    renderEngineIsSet_ = false;
}

std::vector<std::string>& ListAssetsRequest::getAssetId()
{
    return assetId_;
}

void ListAssetsRequest::setAssetId(const std::vector<std::string>& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ListAssetsRequest::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ListAssetsRequest::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string ListAssetsRequest::getSex() const
{
    return sex_;
}

void ListAssetsRequest::setSex(const std::string& value)
{
    sex_ = value;
    sexIsSet_ = true;
}

bool ListAssetsRequest::sexIsSet() const
{
    return sexIsSet_;
}

void ListAssetsRequest::unsetsex()
{
    sexIsSet_ = false;
}

std::string ListAssetsRequest::getLanguage() const
{
    return language_;
}

void ListAssetsRequest::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ListAssetsRequest::languageIsSet() const
{
    return languageIsSet_;
}

void ListAssetsRequest::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string ListAssetsRequest::getSystemProperty() const
{
    return systemProperty_;
}

void ListAssetsRequest::setSystemProperty(const std::string& value)
{
    systemProperty_ = value;
    systemPropertyIsSet_ = true;
}

bool ListAssetsRequest::systemPropertyIsSet() const
{
    return systemPropertyIsSet_;
}

void ListAssetsRequest::unsetsystemProperty()
{
    systemPropertyIsSet_ = false;
}

bool ListAssetsRequest::isActionEditable() const
{
    return actionEditable_;
}

void ListAssetsRequest::setActionEditable(bool value)
{
    actionEditable_ = value;
    actionEditableIsSet_ = true;
}

bool ListAssetsRequest::actionEditableIsSet() const
{
    return actionEditableIsSet_;
}

void ListAssetsRequest::unsetactionEditable()
{
    actionEditableIsSet_ = false;
}

bool ListAssetsRequest::isIsWithActionLibrary() const
{
    return isWithActionLibrary_;
}

void ListAssetsRequest::setIsWithActionLibrary(bool value)
{
    isWithActionLibrary_ = value;
    isWithActionLibraryIsSet_ = true;
}

bool ListAssetsRequest::isWithActionLibraryIsSet() const
{
    return isWithActionLibraryIsSet_;
}

void ListAssetsRequest::unsetisWithActionLibrary()
{
    isWithActionLibraryIsSet_ = false;
}

bool ListAssetsRequest::isIsMovable() const
{
    return isMovable_;
}

void ListAssetsRequest::setIsMovable(bool value)
{
    isMovable_ = value;
    isMovableIsSet_ = true;
}

bool ListAssetsRequest::isMovableIsSet() const
{
    return isMovableIsSet_;
}

void ListAssetsRequest::unsetisMovable()
{
    isMovableIsSet_ = false;
}

std::string ListAssetsRequest::getVoiceProvider() const
{
    return voiceProvider_;
}

void ListAssetsRequest::setVoiceProvider(const std::string& value)
{
    voiceProvider_ = value;
    voiceProviderIsSet_ = true;
}

bool ListAssetsRequest::voiceProviderIsSet() const
{
    return voiceProviderIsSet_;
}

void ListAssetsRequest::unsetvoiceProvider()
{
    voiceProviderIsSet_ = false;
}

std::string ListAssetsRequest::getRole() const
{
    return role_;
}

void ListAssetsRequest::setRole(const std::string& value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool ListAssetsRequest::roleIsSet() const
{
    return roleIsSet_;
}

void ListAssetsRequest::unsetrole()
{
    roleIsSet_ = false;
}

bool ListAssetsRequest::isIsRealtimeVoice() const
{
    return isRealtimeVoice_;
}

void ListAssetsRequest::setIsRealtimeVoice(bool value)
{
    isRealtimeVoice_ = value;
    isRealtimeVoiceIsSet_ = true;
}

bool ListAssetsRequest::isRealtimeVoiceIsSet() const
{
    return isRealtimeVoiceIsSet_;
}

void ListAssetsRequest::unsetisRealtimeVoice()
{
    isRealtimeVoiceIsSet_ = false;
}

std::string ListAssetsRequest::getHumanModel2dVersion() const
{
    return humanModel2dVersion_;
}

void ListAssetsRequest::setHumanModel2dVersion(const std::string& value)
{
    humanModel2dVersion_ = value;
    humanModel2dVersionIsSet_ = true;
}

bool ListAssetsRequest::humanModel2dVersionIsSet() const
{
    return humanModel2dVersionIsSet_;
}

void ListAssetsRequest::unsethumanModel2dVersion()
{
    humanModel2dVersionIsSet_ = false;
}

std::string ListAssetsRequest::getIncludeDeviceName() const
{
    return includeDeviceName_;
}

void ListAssetsRequest::setIncludeDeviceName(const std::string& value)
{
    includeDeviceName_ = value;
    includeDeviceNameIsSet_ = true;
}

bool ListAssetsRequest::includeDeviceNameIsSet() const
{
    return includeDeviceNameIsSet_;
}

void ListAssetsRequest::unsetincludeDeviceName()
{
    includeDeviceNameIsSet_ = false;
}

std::string ListAssetsRequest::getExcludeDeviceName() const
{
    return excludeDeviceName_;
}

void ListAssetsRequest::setExcludeDeviceName(const std::string& value)
{
    excludeDeviceName_ = value;
    excludeDeviceNameIsSet_ = true;
}

bool ListAssetsRequest::excludeDeviceNameIsSet() const
{
    return excludeDeviceNameIsSet_;
}

void ListAssetsRequest::unsetexcludeDeviceName()
{
    excludeDeviceNameIsSet_ = false;
}

std::string ListAssetsRequest::getSupportedService() const
{
    return supportedService_;
}

void ListAssetsRequest::setSupportedService(const std::string& value)
{
    supportedService_ = value;
    supportedServiceIsSet_ = true;
}

bool ListAssetsRequest::supportedServiceIsSet() const
{
    return supportedServiceIsSet_;
}

void ListAssetsRequest::unsetsupportedService()
{
    supportedServiceIsSet_ = false;
}

std::string ListAssetsRequest::getAppUserId() const
{
    return appUserId_;
}

void ListAssetsRequest::setAppUserId(const std::string& value)
{
    appUserId_ = value;
    appUserIdIsSet_ = true;
}

bool ListAssetsRequest::appUserIdIsSet() const
{
    return appUserIdIsSet_;
}

void ListAssetsRequest::unsetappUserId()
{
    appUserIdIsSet_ = false;
}

std::string ListAssetsRequest::getProjectGroupId() const
{
    return projectGroupId_;
}

void ListAssetsRequest::setProjectGroupId(const std::string& value)
{
    projectGroupId_ = value;
    projectGroupIdIsSet_ = true;
}

bool ListAssetsRequest::projectGroupIdIsSet() const
{
    return projectGroupIdIsSet_;
}

void ListAssetsRequest::unsetprojectGroupId()
{
    projectGroupIdIsSet_ = false;
}

}
}
}
}
}


