
#include <huaweicloud/cpcs/v1/CpcsMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef CpcsMeta::genRequestDefForAddClusterPort() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForAssociateApps() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForAuthorizeAccessKeys() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForBatchDisableAccessKeys() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForBatchEnableAccessKeys() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForCancelAuthorizeAccessKeys() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForCheckClusterPort() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForCreateApp() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForCreateAppAccessKey() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForCreateCluster() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForDeleteAccessKey() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForDeleteApp() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForDeleteCcspCluster() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForDeleteClusterPort() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForDisableCcspInstance() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForDisassociateApps() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForEnableCcspInstance() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForListCcspTenantImages() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageNum")
                  .withJsonTag("page_num")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ImageName")
                  .withJsonTag("image_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServiceType")
                  .withJsonTag("service_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForListClusterPort() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForShowAccessKey() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForShowAppAccessKeyList() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageNum")
                  .withJsonTag("page_num")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("KeyName")
                  .withJsonTag("key_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForShowAppList() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageNum")
                  .withJsonTag("page_num")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AppName")
                  .withJsonTag("app_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VpcName")
                  .withJsonTag("vpc_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForShowAssociationList() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ClusterId")
                  .withJsonTag("cluster_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AppId")
                  .withJsonTag("app_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageNum")
                  .withJsonTag("page_num")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForShowAuditLog() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageNum")
                  .withJsonTag("page_num")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForShowAvailableAz() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForShowCcspCluster() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForShowCcspClusterList() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageNum")
                  .withJsonTag("page_num")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServiceType")
                  .withJsonTag("service_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForShowCcspInstanceInfo() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageNum")
                  .withJsonTag("page_num")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ClusterId")
                  .withJsonTag("cluster_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IsNormal")
                  .withJsonTag("is_normal")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForShowClusterAccessKeyList() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageNum")
                  .withJsonTag("page_num")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AppName")
                  .withJsonTag("app_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForShowClusterUri() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForShowResourceDetailAccessKey() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ClusterId")
                  .withJsonTag("cluster_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AppId")
                  .withJsonTag("app_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServiceType")
                  .withJsonTag("service_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AlgorithmType")
                  .withJsonTag("algorithm_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CertificateType")
                  .withJsonTag("certificate_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageNum")
                  .withJsonTag("page_num")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("From")
                  .withJsonTag("from")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("To")
                  .withJsonTag("to")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForShowResourceDetailCertificate() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ClusterId")
                  .withJsonTag("cluster_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AppId")
                  .withJsonTag("app_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServiceType")
                  .withJsonTag("service_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AlgorithmType")
                  .withJsonTag("algorithm_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CertificateType")
                  .withJsonTag("certificate_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageNum")
                  .withJsonTag("page_num")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("From")
                  .withJsonTag("from")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("To")
                  .withJsonTag("to")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForShowResourceInfo() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForShowStatisticCertificate() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ClusterId")
                  .withJsonTag("cluster_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AppId")
                  .withJsonTag("app_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("From")
                  .withJsonTag("from")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("To")
                  .withJsonTag("to")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Period")
                  .withJsonTag("period")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Filter")
                  .withJsonTag("filter")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Algorithm")
                  .withJsonTag("algorithm")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AlgorithmType")
                  .withJsonTag("algorithm_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CertificateType")
                  .withJsonTag("certificate_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServerType")
                  .withJsonTag("server_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForShowStatisticInterface() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ClusterId")
                  .withJsonTag("cluster_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AppId")
                  .withJsonTag("app_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("From")
                  .withJsonTag("from")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("To")
                  .withJsonTag("to")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Period")
                  .withJsonTag("period")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Filter")
                  .withJsonTag("filter")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Algorithm")
                  .withJsonTag("algorithm")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AlgorithmType")
                  .withJsonTag("algorithm_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CertificateType")
                  .withJsonTag("certificate_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServerType")
                  .withJsonTag("server_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForShowStatisticResource() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ClusterId")
                  .withJsonTag("cluster_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AppId")
                  .withJsonTag("app_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("From")
                  .withJsonTag("from")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("To")
                  .withJsonTag("to")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Period")
                  .withJsonTag("period")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Filter")
                  .withJsonTag("filter")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Algorithm")
                  .withJsonTag("algorithm")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AlgorithmType")
                  .withJsonTag("algorithm_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CertificateType")
                  .withJsonTag("certificate_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServerType")
                  .withJsonTag("server_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForShowStatisticSecretKey() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ClusterId")
                  .withJsonTag("cluster_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AppId")
                  .withJsonTag("app_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("From")
                  .withJsonTag("from")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("To")
                  .withJsonTag("to")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Period")
                  .withJsonTag("period")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Filter")
                  .withJsonTag("filter")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Algorithm")
                  .withJsonTag("algorithm")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AlgorithmType")
                  .withJsonTag("algorithm_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CertificateType")
                  .withJsonTag("certificate_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServerType")
                  .withJsonTag("server_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForShowStatusApp() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ClusterId")
                  .withJsonTag("cluster_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AppId")
                  .withJsonTag("app_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("InstanceId")
                  .withJsonTag("instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("From")
                  .withJsonTag("from")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("To")
                  .withJsonTag("to")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Period")
                  .withJsonTag("period")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Filter")
                  .withJsonTag("filter")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServerType")
                  .withJsonTag("server_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForShowStatusCluster() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ClusterId")
                  .withJsonTag("cluster_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AppId")
                  .withJsonTag("app_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("InstanceId")
                  .withJsonTag("instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("From")
                  .withJsonTag("from")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("To")
                  .withJsonTag("to")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Period")
                  .withJsonTag("period")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Filter")
                  .withJsonTag("filter")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServerType")
                  .withJsonTag("server_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForShowStatusInstance() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ClusterId")
                  .withJsonTag("cluster_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AppId")
                  .withJsonTag("app_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("InstanceId")
                  .withJsonTag("instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("From")
                  .withJsonTag("from")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("To")
                  .withJsonTag("to")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Period")
                  .withJsonTag("period")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Filter")
                  .withJsonTag("filter")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServerType")
                  .withJsonTag("server_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForShowStatusService() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ClusterId")
                  .withJsonTag("cluster_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AppId")
                  .withJsonTag("app_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("InstanceId")
                  .withJsonTag("instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("From")
                  .withJsonTag("from")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("To")
                  .withJsonTag("to")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Period")
                  .withJsonTag("period")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Filter")
                  .withJsonTag("filter")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServerType")
                  .withJsonTag("server_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForShowVmMonitor() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Namespace")
                  .withJsonTag("namespace")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("MetricName")
                  .withJsonTag("metric_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("InstanceId")
                  .withJsonTag("instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VsmId")
                  .withJsonTag("vsm_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("From")
                  .withJsonTag("from")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("To")
                  .withJsonTag("to")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Period")
                  .withJsonTag("period")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Filter")
                  .withJsonTag("filter")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CpcsMeta::genRequestDefForSwitchCpcsToken() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xCPCSToken").
        withJsonTag("X-CPCS-Token").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}


}
}
}
}

