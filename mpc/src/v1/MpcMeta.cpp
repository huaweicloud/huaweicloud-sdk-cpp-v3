
#include <huaweicloud/mpc/v1/MpcMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef MpcMeta::genRequestDefForCreateAnimatedGraphicsTask() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForDeleteAnimatedGraphicsTask() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TaskId")
                  .withJsonTag("task_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForListAnimatedGraphicsTask() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TaskId")
                  .withJsonTag("task_id")
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
    reqDefBuilder.withRequestField(FieldDef().withName("Page")
                  .withJsonTag("page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Size")
                  .withJsonTag("size")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("x-language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForCreateAgenciesTask() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForListAllBuckets() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForListAllObsObjList() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Bucket")
                  .withJsonTag("bucket")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Prefix")
                  .withJsonTag("prefix")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForListNotifyEvent() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForListNotifySmnTopicConfig() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForNotifySmnTopicConfig() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForShowAgenciesTask() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForUpdateBucketAuthorized() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForCreateEditingJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForDeleteEditingJob() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("JobId")
                  .withJsonTag("job_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForListEditingJob() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("JobId")
                  .withJsonTag("job_id")
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
    reqDefBuilder.withRequestField(FieldDef().withName("Page")
                  .withJsonTag("page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Size")
                  .withJsonTag("size")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("x-language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForCreateEncryptTask() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForDeleteEncryptTask() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TaskId")
                  .withJsonTag("task_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForListEncryptTask() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TaskId")
                  .withJsonTag("task_id")
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
    reqDefBuilder.withRequestField(FieldDef().withName("Page")
                  .withJsonTag("page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Size")
                  .withJsonTag("size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForCreateExtractTask() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForDeleteExtractTask() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TaskId")
                  .withJsonTag("task_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForListExtractTask() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TaskId")
                  .withJsonTag("task_id")
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
    reqDefBuilder.withRequestField(FieldDef().withName("Page")
                  .withJsonTag("page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Size")
                  .withJsonTag("size")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("x-language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForCreateMbTasksReport() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForCreateMergeChannelsTask() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForCreateResetTracksTask() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForDeleteMergeChannelsTask() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TaskId")
                  .withJsonTag("task_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForDeleteResetTracksTask() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TaskId")
                  .withJsonTag("task_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForListMergeChannelsTask() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TaskId")
                  .withJsonTag("task_id")
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
    reqDefBuilder.withRequestField(FieldDef().withName("Page")
                  .withJsonTag("page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Size")
                  .withJsonTag("size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForListResetTracksTask() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TaskId")
                  .withJsonTag("task_id")
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
    reqDefBuilder.withRequestField(FieldDef().withName("Page")
                  .withJsonTag("page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Size")
                  .withJsonTag("size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForCreateMediaProcessTask() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForDeleteMediaProcessTask() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TaskId")
                  .withJsonTag("task_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForListMediaProcessTask() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TaskId")
                  .withJsonTag("task_id")
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
    reqDefBuilder.withRequestField(FieldDef().withName("Page")
                  .withJsonTag("page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Size")
                  .withJsonTag("size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForCreateMpeCallBack() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForCreateQualityEnhanceTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForDeleteQualityEnhanceTemplate() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TemplateId")
                  .withJsonTag("template_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForListQualityEnhanceDefaultTemplate() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForUpdateQualityEnhanceTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForListTranscodeDetail() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TaskId")
                  .withJsonTag("task_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForCancelRemuxTask() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TaskId")
                  .withJsonTag("task_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForCreateRemuxTask() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForCreateRetryRemuxTask() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForDeleteRemuxTask() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TaskId")
                  .withJsonTag("task_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForListRemuxTask() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TaskId")
                  .withJsonTag("task_id")
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
    reqDefBuilder.withRequestField(FieldDef().withName("InputBucket")
                  .withJsonTag("input_bucket")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("InputObject")
                  .withJsonTag("input_object")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Page")
                  .withJsonTag("page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Size")
                  .withJsonTag("size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForCreateTemplateGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForDeleteTemplateGroup() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("GroupId")
                  .withJsonTag("group_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForListTemplateGroup() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("GroupId")
                  .withJsonTag("group_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("GroupName")
                  .withJsonTag("group_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Page")
                  .withJsonTag("page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Size")
                  .withJsonTag("size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForUpdateTemplateGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForShowTenantAccessInfo() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("x-language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForUpdateTenantAccessInfo() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("x-language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForCreateThumbnailsTask() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForDeleteThumbnailsTask() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TaskId")
                  .withJsonTag("task_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForListThumbnailsTask() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TaskId")
                  .withJsonTag("task_id")
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
    reqDefBuilder.withRequestField(FieldDef().withName("Page")
                  .withJsonTag("page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Size")
                  .withJsonTag("size")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("x-language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForCreateTranscodingTask() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForDeleteTranscodingTask() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TaskId")
                  .withJsonTag("task_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForDeleteTranscodingTaskByConsole() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TaskId")
                  .withJsonTag("task_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForListStatSummary() {
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
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForListTranscodingTask() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TaskId")
                  .withJsonTag("task_id")
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
    reqDefBuilder.withRequestField(FieldDef().withName("Page")
                  .withJsonTag("page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Size")
                  .withJsonTag("size")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("x-language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForCreateTransTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForDeleteTemplate() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TemplateId")
                  .withJsonTag("template_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForListTemplate() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TemplateId")
                  .withJsonTag("template_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Page")
                  .withJsonTag("page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Size")
                  .withJsonTag("size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForUpdateTransTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForCreateWatermarkTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForDeleteWatermarkTemplate() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TemplateId")
                  .withJsonTag("template_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForListWatermarkTemplate() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TemplateId")
                  .withJsonTag("template_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Page")
                  .withJsonTag("page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Size")
                  .withJsonTag("size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MpcMeta::genRequestDefForUpdateWatermarkTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}


}
}
}
}

