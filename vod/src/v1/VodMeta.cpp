
#include <huaweicloud/vod/v1/VodMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef VodMeta::genRequestDefForCancelAssetTranscodeTask() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AssetId")
                  .withJsonTag("asset_id")
                  .withLocationType(Query_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForCancelExtractAudioTask() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AssetId")
                  .withJsonTag("asset_id")
                  .withLocationType(Query_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForCheckMd5Duplication() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Size")
                  .withJsonTag("size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Md5")
                  .withJsonTag("md5")
                  .withLocationType(Query_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForConfirmAssetUpload() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForConfirmImageUpload() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForCreateAssetByFileUpload() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForCreateAssetCategory() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForCreateAssetProcessTask() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForCreateAssetReviewTask() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForCreateEditTask() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForCreateExtractAudioTask() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForCreateObjectProcessTask() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForCreateObjectReplication() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForCreateObjectRetrieval() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForCreatePreheatingAsset() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForCreateRealTimeClip() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForCreateTakeOverTask() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForCreateTemplateGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForCreateTemplateGroupCollection() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForCreateTranscodeTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForCreateUploadByUrl() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForCreateWatermarkTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForDeleteAssetCategory() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForDeleteAssets() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AssetId")
                  .withJsonTag("asset_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DeleteType")
                  .withJsonTag("delete_type")
                  .withLocationType(Query_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForDeleteDyAsset() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Bucket")
                  .withJsonTag("bucket")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Object")
                  .withJsonTag("object")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CallbackUrl")
                  .withJsonTag("callback_url")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SessionContext")
                  .withJsonTag("session_context")
                  .withLocationType(Query_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForDeleteTemplateGroup() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("GroupId")
                  .withJsonTag("group_id")
                  .withLocationType(Query_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForDeleteTemplateGroupCollection() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("GroupCollectionId")
                  .withJsonTag("group_collection_id")
                  .withLocationType(Query_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForDeleteTranscodeProduct() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForDeleteTranscodeTemplate() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("GroupId")
                  .withJsonTag("group_id")
                  .withLocationType(Query_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForDeleteWatermarkTemplate() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForListAssetCategory() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForListAssetDailySummaryLog() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForListAssetList() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AssetId")
                  .withJsonTag("asset_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CategoryId")
                  .withJsonTag("category_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Tags")
                  .withJsonTag("tags")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("QueryString")
                  .withJsonTag("query_string")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("MediaType")
                  .withJsonTag("media_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Page")
                  .withJsonTag("page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Size")
                  .withJsonTag("size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Order")
                  .withJsonTag("order")
                  .withLocationType(Query_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForListCdnStatistics() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StatType")
                  .withJsonTag("stat_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Domain")
                  .withJsonTag("domain")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Interval")
                  .withJsonTag("interval")
                  .withLocationType(Query_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForListDomainLogs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("DomainName")
                  .withJsonTag("domain_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("QueryDate")
                  .withJsonTag("query_date")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageNumber")
                  .withJsonTag("page_number")
                  .withLocationType(Query_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForListTemplateGroup() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("GroupId")
                  .withJsonTag("group_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Page")
                  .withJsonTag("page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Size")
                  .withJsonTag("size")
                  .withLocationType(Query_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForListTemplateGroupCollection() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("GroupCollectionId")
                  .withJsonTag("group_collection_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForListTopStatistics() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Domain")
                  .withJsonTag("domain")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Date")
                  .withJsonTag("date")
                  .withLocationType(Query_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForListTranscodeTemplate() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("GroupId")
                  .withJsonTag("group_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IsDefault")
                  .withJsonTag("is_default")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("QueryString")
                  .withJsonTag("query_string")
                  .withLocationType(Query_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForListWatermarkTemplate() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Page")
                  .withJsonTag("page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Size")
                  .withJsonTag("size")
                  .withLocationType(Query_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForModifySubtitle() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForPublishAssetFromObs() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForPublishAssets() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForRefreshAsset() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForShowAssetCipher() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AssetId")
                  .withJsonTag("asset_id")
                  .withLocationType(Query_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForShowAssetDetail() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AssetId")
                  .withJsonTag("asset_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Categories")
                  .withJsonTag("categories")
                  .withLocationType(Query_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForShowAssetMeta() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AssetId")
                  .withJsonTag("asset_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TranscodeStatus")
                  .withJsonTag("transcodeStatus")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AssetStatus")
                  .withJsonTag("assetStatus")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CategoryId")
                  .withJsonTag("category_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Tags")
                  .withJsonTag("tags")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("QueryString")
                  .withJsonTag("query_string")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Page")
                  .withJsonTag("page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Size")
                  .withJsonTag("size")
                  .withLocationType(Query_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForShowAssetTempAuthority() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("HttpVerb")
                  .withJsonTag("http_verb")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Bucket")
                  .withJsonTag("bucket")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ObjectKey")
                  .withJsonTag("object_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ContentType")
                  .withJsonTag("content_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ContentMd5")
                  .withJsonTag("content_md5")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("UploadId")
                  .withJsonTag("upload_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PartNumber")
                  .withJsonTag("part_number")
                  .withLocationType(Query_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForShowCdnStatistics() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StatType")
                  .withJsonTag("stat_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Domain")
                  .withJsonTag("domain")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Interval")
                  .withJsonTag("interval")
                  .withLocationType(Query_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForShowObjectMetaData() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Bucket")
                  .withJsonTag("bucket")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Object")
                  .withJsonTag("object")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForShowPreheatingAsset() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TaskId")
                  .withJsonTag("task_id")
                  .withLocationType(Query_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForShowRefreshResult() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TaskId")
                  .withJsonTag("task_id")
                  .withLocationType(Query_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForShowStorageModeType() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForShowTaskDetail() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TaskId")
                  .withJsonTag("task_id")
                  .withLocationType(Query_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForShowVodRetrieval() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Interval")
                  .withJsonTag("interval")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForShowVodStatistics() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Interval")
                  .withJsonTag("interval")
                  .withLocationType(Query_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForUnpublishAssets() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForUpdateAsset() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForUpdateAssetCategory() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForUpdateAssetMeta() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForUpdateBucketAuthorized() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForUpdateCoverByThumbnail() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForUpdateStorageMode() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForUpdateStorageModeType() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForUpdateTemplateGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForUpdateTemplateGroupCollection() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForUpdateTranscodeTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForUpdateWatermarkTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForUploadMetaDataByUrl() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForListTakeOverTask() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TaskId")
                  .withJsonTag("task_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Page")
                  .withJsonTag("page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Size")
                  .withJsonTag("size")
                  .withLocationType(Query_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForShowTakeOverAssetDetails() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("SourceBucket")
                  .withJsonTag("source_bucket")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SourceObject")
                  .withJsonTag("source_object")
                  .withLocationType(Query_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef VodMeta::genRequestDefForShowTakeOverTaskDetails() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TaskId")
                  .withJsonTag("task_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Page")
                  .withJsonTag("page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Size")
                  .withJsonTag("size")
                  .withLocationType(Query_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    return reqDefBuilder;
}


}
}
}
}

