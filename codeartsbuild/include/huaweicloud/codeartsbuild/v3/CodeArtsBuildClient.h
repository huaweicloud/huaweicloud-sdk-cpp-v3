#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_CodeArtsBuildClient_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_CodeArtsBuildClient_H_

#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/codeartsbuild/v3/model/CreateBuildJobRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/CreateBuildJobRequestBody.h>
#include <huaweicloud/codeartsbuild/v3/model/CreateBuildJobResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/CreateTemplatesRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/CreateTemplatesRequestBody.h>
#include <huaweicloud/codeartsbuild/v3/model/CreateTemplatesResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/DeleteBuildJobRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/DeleteBuildJobResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/DeleteTemplatesRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/DeleteTemplatesResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/DisableBuildJobRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/DisableBuildJobResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/DisableNoticeRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/DisableNoticeResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/DownloadBuildLogRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/DownloadBuildLogResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/DownloadKeystoreRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/DownloadKeystoreResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/DownloadTaskLogRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/DownloadTaskLogResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/EnableBuildJobRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/EnableBuildJobResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ListJobConfigRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ListJobConfigResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ListNoticeRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ListNoticeResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ListTemplatesRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ListTemplatesResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/RunJobRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/RunJobRequestBody.h>
#include <huaweicloud/codeartsbuild/v3/model/RunJobResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowHistoryDetailsRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowHistoryDetailsResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobListByProjectIdRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobListByProjectIdResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobStatusRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobStatusResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobSuccessRatioRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobSuccessRatioResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowLastHistoryRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowLastHistoryResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowListHistoryRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowListHistoryResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowListPeriodHistoryRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowListPeriodHistoryResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowOutputInfoRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowOutputInfoResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowRecordDetailRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowRecordDetailResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/StopBuildJobRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/StopBuildJobResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/UpdateBuildJobRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/UpdateBuildJobRequestBody.h>
#include <huaweicloud/codeartsbuild/v3/model/UpdateBuildJobResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/UpdateNoticeRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/UpdateNoticeRequestBody.h>
#include <huaweicloud/codeartsbuild/v3/model/UpdateNoticeResponse.h>
#include <string>

#include <huaweicloud/codeartsbuild/v3/model/DownloadLogByRecordIdRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/DownloadLogByRecordIdResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowFlowGraphRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowFlowGraphResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowRecordInfoRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowRecordInfoResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/StopJobRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/StopJobRequestBody.h>
#include <huaweicloud/codeartsbuild/v3/model/StopJobResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Codeartsbuild::V3::Model;

class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  CodeArtsBuildClient : public Client
{
public:

    CodeArtsBuildClient();

    virtual ~CodeArtsBuildClient();

    static ClientBuilder<CodeArtsBuildClient> newBuilder();

    // 创建构建任务
    //
    // 创建构建任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateBuildJobResponse> createBuildJob(
        CreateBuildJobRequest &request
    );
    // 创建构建模板
    //
    // 创建构建模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTemplatesResponse> createTemplates(
        CreateTemplatesRequest &request
    );
    // 删除构建任务
    //
    // 删除构建任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteBuildJobResponse> deleteBuildJob(
        DeleteBuildJobRequest &request
    );
    // 删除构建模板
    //
    // 删除构建模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTemplatesResponse> deleteTemplates(
        DeleteTemplatesRequest &request
    );
    // 禁用构建任务
    //
    // 禁用构建任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisableBuildJobResponse> disableBuildJob(
        DisableBuildJobRequest &request
    );
    // 取消通知
    //
    // 取消通知
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisableNoticeResponse> disableNotice(
        DisableNoticeRequest &request
    );
    // 下载全量构建日志
    //
    // 下载全量构建日志
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadBuildLogResponse> downloadBuildLog(
        DownloadBuildLogRequest &request
    );
    // KeyStore文件下载
    //
    // 下载指定租户下的KeyStore文件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadKeystoreResponse> downloadKeystore(
        DownloadKeystoreRequest &request
    );
    // 下载构建步骤日志
    //
    // 下载构建步骤日志
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadTaskLogResponse> downloadTaskLog(
        DownloadTaskLogRequest &request
    );
    // 恢复构建任务
    //
    // 恢复构建任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<EnableBuildJobResponse> enableBuildJob(
        EnableBuildJobRequest &request
    );
    // 获取构建任务详情
    //
    // 获取构建任务详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListJobConfigResponse> listJobConfig(
        ListJobConfigRequest &request
    );
    // 查询通知
    //
    // 查询通知
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListNoticeResponse> listNotice(
        ListNoticeRequest &request
    );
    // 查询构建模板
    //
    // 查询构建模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTemplatesResponse> listTemplates(
        ListTemplatesRequest &request
    );
    // 执行构建任务
    //
    // 执行构建任务,可传自定义参数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RunJobResponse> runJob(
        RunJobRequest &request
    );
    // 获取构建历史详情信息接口
    //
    // 获取构建历史详情信息接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowHistoryDetailsResponse> showHistoryDetails(
        ShowHistoryDetailsRequest &request
    );
    // 查看项目下用户的构建任务列表
    //
    // 查看项目下用户的构建任务列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowJobListByProjectIdResponse> showJobListByProjectId(
        ShowJobListByProjectIdRequest &request
    );
    // 查看任务运行状态
    //
    // 查看任务运行状态
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowJobStatusResponse> showJobStatus(
        ShowJobStatusRequest &request
    );
    // 根据开始时间和结束时间查看构建任务的构建成功率
    //
    // 根据开始时间和结束时间查看构建任务的构建成功率
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowJobSuccessRatioResponse> showJobSuccessRatio(
        ShowJobSuccessRatioRequest &request
    );
    // 查询指定代码仓库最近一次成功的构建历史
    //
    // 查询指定代码仓库最近一次成功的构建历史
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowLastHistoryResponse> showLastHistory(
        ShowLastHistoryRequest &request
    );
    // 查看构建任务的构建历史列表
    //
    // 查看构建任务的构建历史列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowListHistoryResponse> showListHistory(
        ShowListHistoryRequest &request
    );
    // 根据开始时间和结束时间查看构建任务的构建历史列表
    //
    // 根据开始时间和结束时间查看构建任务的构建历史列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowListPeriodHistoryResponse> showListPeriodHistory(
        ShowListPeriodHistoryRequest &request
    );
    // 获取构建产物详情信息
    //
    // 获取构建产物详情信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowOutputInfoResponse> showOutputInfo(
        ShowOutputInfoRequest &request
    );
    // 获取构建记录信息
    //
    // 获取构建记录信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRecordDetailResponse> showRecordDetail(
        ShowRecordDetailRequest &request
    );
    // 停止构建任务
    //
    // 停止构建任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopBuildJobResponse> stopBuildJob(
        StopBuildJobRequest &request
    );
    // 更新构建任务
    //
    // 更新构建任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateBuildJobResponse> updateBuildJob(
        UpdateBuildJobRequest &request
    );
    // 更新通知
    //
    // 更新通知
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateNoticeResponse> updateNotice(
        UpdateNoticeRequest &request
    );

    // 下载构建日志(待下线)
    //
    // 下载构建日志(待下线)
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadLogByRecordIdResponse> downloadLogByRecordId(
        DownloadLogByRecordIdRequest &request
    );
    // 获取构建记录的有向无环图(待下线)
    //
    // 获取构建记录的有向无环图(待下线)
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowFlowGraphResponse> showFlowGraph(
        ShowFlowGraphRequest &request
    );
    // 获取构建记录信息(待下线)
    //
    // 获取构建记录信息(待下线)
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRecordInfoResponse> showRecordInfo(
        ShowRecordInfoRequest &request
    );
    // 停止构建任务(待下线)
    //
    // 停止构建任务(待下线)
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopJobResponse> stopJob(
        StopJobRequest &request
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

template class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Codeartsbuild::V3::CodeArtsBuildClient>;

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_CodeArtsBuildClient_H_

