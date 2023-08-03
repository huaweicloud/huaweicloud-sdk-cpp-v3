#ifndef HUAWEICLOUD_SDK_CSMS_V1_CsmsClient_H_
#define HUAWEICLOUD_SDK_CSMS_V1_CsmsClient_H_

#include <huaweicloud/csms/v1/CsmsExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/csms/v1/model/BatchCreateOrDeleteTagsRequest.h>
#include <huaweicloud/csms/v1/model/BatchCreateOrDeleteTagsRequestBody.h>
#include <huaweicloud/csms/v1/model/BatchCreateOrDeleteTagsResponse.h>
#include <huaweicloud/csms/v1/model/CreateSecretRequest.h>
#include <huaweicloud/csms/v1/model/CreateSecretRequestBody.h>
#include <huaweicloud/csms/v1/model/CreateSecretResponse.h>
#include <huaweicloud/csms/v1/model/CreateSecretTagRequest.h>
#include <huaweicloud/csms/v1/model/CreateSecretTagRequestBody.h>
#include <huaweicloud/csms/v1/model/CreateSecretTagResponse.h>
#include <huaweicloud/csms/v1/model/CreateSecretVersionRequest.h>
#include <huaweicloud/csms/v1/model/CreateSecretVersionRequestBody.h>
#include <huaweicloud/csms/v1/model/CreateSecretVersionResponse.h>
#include <huaweicloud/csms/v1/model/DeleteSecretForScheduleRequest.h>
#include <huaweicloud/csms/v1/model/DeleteSecretForScheduleRequestBody.h>
#include <huaweicloud/csms/v1/model/DeleteSecretForScheduleResponse.h>
#include <huaweicloud/csms/v1/model/DeleteSecretRequest.h>
#include <huaweicloud/csms/v1/model/DeleteSecretResponse.h>
#include <huaweicloud/csms/v1/model/DeleteSecretStageRequest.h>
#include <huaweicloud/csms/v1/model/DeleteSecretStageResponse.h>
#include <huaweicloud/csms/v1/model/DeleteSecretTagRequest.h>
#include <huaweicloud/csms/v1/model/DeleteSecretTagResponse.h>
#include <huaweicloud/csms/v1/model/DownloadSecretBlobRequest.h>
#include <huaweicloud/csms/v1/model/DownloadSecretBlobResponse.h>
#include <huaweicloud/csms/v1/model/ListProjectSecretsTagsRequest.h>
#include <huaweicloud/csms/v1/model/ListProjectSecretsTagsResponse.h>
#include <huaweicloud/csms/v1/model/ListResourceInstancesRequest.h>
#include <huaweicloud/csms/v1/model/ListResourceInstancesRequestBody.h>
#include <huaweicloud/csms/v1/model/ListResourceInstancesResponse.h>
#include <huaweicloud/csms/v1/model/ListSecretTagsRequest.h>
#include <huaweicloud/csms/v1/model/ListSecretTagsResponse.h>
#include <huaweicloud/csms/v1/model/ListSecretVersionsRequest.h>
#include <huaweicloud/csms/v1/model/ListSecretVersionsResponse.h>
#include <huaweicloud/csms/v1/model/ListSecretsRequest.h>
#include <huaweicloud/csms/v1/model/ListSecretsResponse.h>
#include <huaweicloud/csms/v1/model/RestoreSecretRequest.h>
#include <huaweicloud/csms/v1/model/RestoreSecretResponse.h>
#include <huaweicloud/csms/v1/model/ShowSecretRequest.h>
#include <huaweicloud/csms/v1/model/ShowSecretResponse.h>
#include <huaweicloud/csms/v1/model/ShowSecretStageRequest.h>
#include <huaweicloud/csms/v1/model/ShowSecretStageResponse.h>
#include <huaweicloud/csms/v1/model/ShowSecretVersionRequest.h>
#include <huaweicloud/csms/v1/model/ShowSecretVersionResponse.h>
#include <huaweicloud/csms/v1/model/UpdateSecretRequest.h>
#include <huaweicloud/csms/v1/model/UpdateSecretRequestBody.h>
#include <huaweicloud/csms/v1/model/UpdateSecretResponse.h>
#include <huaweicloud/csms/v1/model/UpdateSecretStageRequest.h>
#include <huaweicloud/csms/v1/model/UpdateSecretStageRequestBody.h>
#include <huaweicloud/csms/v1/model/UpdateSecretStageResponse.h>
#include <huaweicloud/csms/v1/model/UploadSecretBlobRequest.h>
#include <huaweicloud/csms/v1/model/UploadSecretBlobRequestBody.h>
#include <huaweicloud/csms/v1/model/UploadSecretBlobResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Csms::V1::Model;

class HUAWEICLOUD_CSMS_V1_EXPORT  CsmsClient : public Client
{
public:

    CsmsClient();

    virtual ~CsmsClient();

    static ClientBuilder<CsmsClient> newBuilder();

    // 批量添加或删除凭据标签
    //
    // - 功能介绍：批量添加或删除凭据标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCreateOrDeleteTagsResponse> batchCreateOrDeleteTags(
        BatchCreateOrDeleteTagsRequest &request
    );
    // 创建凭据
    //
    // 创建新的凭据，并将凭据值存入凭据的初始版本。
    // 
    // 凭据管理服务将凭据值加密后，存储在凭据对象下的版本中。每个版本可与多个凭据版本状态相关联，凭据版本状态用于标识凭据版本处于的阶段，没有版本状态标记的版本视为已弃用，可用凭据管理服务自动删除。
    // 
    // 初始版本的状态被标记为SYSCURRENT。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateSecretResponse> createSecret(
        CreateSecretRequest &request
    );
    // 添加凭据标签
    //
    // - 功能介绍：添加凭据标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateSecretTagResponse> createSecretTag(
        CreateSecretTagRequest &request
    );
    // 创建凭据版本
    //
    // 在指定的凭据中，创建一个新的凭据版本，用于加密保管新的凭据值。默认情况下，新创建的凭据版本被标记为SYSCURRENT状态，而SYSCURRENT标记的前一个凭据版本被标记为SYSPREVIOUS状态。您可以通过指定VersionStage参数来覆盖默认行为。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateSecretVersionResponse> createSecretVersion(
        CreateSecretVersionRequest &request
    );
    // 立即删除凭据
    //
    // 立即删除指定的凭据，且无法恢复。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteSecretResponse> deleteSecret(
        DeleteSecretRequest &request
    );
    // 创建凭据的定时删除任务
    //
    // 指定延迟删除时间，创建删除凭据的定时任务，可设置7~30天的的延迟删除时间。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteSecretForScheduleResponse> deleteSecretForSchedule(
        DeleteSecretForScheduleRequest &request
    );
    // 删除凭据的版本状态
    //
    // 删除指定的凭据版本状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteSecretStageResponse> deleteSecretStage(
        DeleteSecretStageRequest &request
    );
    // 删除凭据标签
    //
    // - 功能介绍：删除凭据标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteSecretTagResponse> deleteSecretTag(
        DeleteSecretTagRequest &request
    );
    // 下载凭据备份
    //
    // 下载指定凭据的备份文件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadSecretBlobResponse> downloadSecretBlob(
        DownloadSecretBlobRequest &request
    );
    // 查询项目标签
    //
    // - 功能介绍：查询用户在指定项目下的所有凭据标签集合。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectSecretsTagsResponse> listProjectSecretsTags(
        ListProjectSecretsTagsRequest &request
    );
    // 查询凭据实例
    //
    // - 功能介绍：查询凭据实例。通过标签过滤，筛选用户凭据,返回凭据列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListResourceInstancesResponse> listResourceInstances(
        ListResourceInstancesRequest &request
    );
    // 查询凭据标签
    //
    // - 功能介绍：查询凭据标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSecretTagsResponse> listSecretTags(
        ListSecretTagsRequest &request
    );
    // 查询凭据的版本列表
    //
    // 查询指定凭据下的版本列表信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSecretVersionsResponse> listSecretVersions(
        ListSecretVersionsRequest &request
    );
    // 查询凭据列表
    //
    // 查询当前用户在本项目下创建的所有凭据。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSecretsResponse> listSecrets(
        ListSecretsRequest &request
    );
    // 取消凭据的定时删除任务
    //
    // 取消凭据的定时删除任务，凭据对象恢复可使用状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RestoreSecretResponse> restoreSecret(
        RestoreSecretRequest &request
    );
    // 查询凭据
    //
    // 查询指定凭据的信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSecretResponse> showSecret(
        ShowSecretRequest &request
    );
    // 查询凭据的版本状态
    //
    // 查询指定凭据版本状态标记的版本信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSecretStageResponse> showSecretStage(
        ShowSecretStageRequest &request
    );
    // 查询凭据的版本与凭据值
    //
    // 查询指定凭据版本的信息和版本中的明文凭据值，只能查询ENABLED状态的凭据。
    // 通过/v1/{project_id}/secrets/{secret_name}/versions/latest （即将当前接口URL中的{version_id}赋值为latest）可访问凭据最新版本的凭据值。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSecretVersionResponse> showSecretVersion(
        ShowSecretVersionRequest &request
    );
    // 更新凭据
    //
    // 更新指定凭据的元数据信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateSecretResponse> updateSecret(
        UpdateSecretRequest &request
    );
    // 更新凭据的版本状态
    //
    // 更新凭据的版本状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateSecretStageResponse> updateSecretStage(
        UpdateSecretStageRequest &request
    );
    // 恢复凭据对象
    //
    // 通过上传凭据备份文件，恢复凭据对象
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UploadSecretBlobResponse> uploadSecretBlob(
        UploadSecretBlobRequest &request
    );


private:
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
    std::string parameterToString(utility::string_t value);
#endif
    std::string parameterToString(std::string value);
    std::string parameterToString(int32_t value);
    std::string parameterToString(int64_t value);
    std::string parameterToString(float value);
    std::string parameterToString(double value);
    std::string parameterToString(const Object& obj);
    std::string parameterToString(const utility::datetime &value);

    template<class T>
    std::string parameterToString(const std::vector<T> &value)
    {
        std::stringstream ss;
        for( size_t i = 0; i < value.size(); i++)
        {
            if (i > 0) {
                ss << ", ";
            }
            ss << parameterToString(value[i]);
        }

    return ss.str();
    }

    template<class T>
    std::string parameterToString(const std::shared_ptr<T> &value)
    {
        return parameterToString(*value.get());
    }

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};

}
}
}
}

template class HUAWEICLOUD_CSMS_V1_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Csms::V1::CsmsClient>;

#endif // HUAWEICLOUD_SDK_CSMS_V1_CsmsClient_H_

