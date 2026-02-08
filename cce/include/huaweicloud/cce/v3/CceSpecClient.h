#ifndef HUAWEICLOUD_SDK_CCE_V3_CceSpecClient_H_
#define HUAWEICLOUD_SDK_CCE_V3_CceSpecClient_H_

#include <huaweicloud/cce/v3/CceExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>

#include <huaweicloud/cce/v3/model/DeleteAutopilotJobRequest.h>
#include <huaweicloud/cce/v3/model/DeleteAutopilotJobResponse.h>
#include <huaweicloud/cce/v3/model/GetAutopilotOneJobRequest.h>
#include <huaweicloud/cce/v3/model/GetAutopilotOneJobResponse.h>
#include <huaweicloud/cce/v3/model/ListAutopilotJobsRequest.h>
#include <huaweicloud/cce/v3/model/ListAutopilotJobsResponse.h>
#include <huaweicloud/cce/v3/model/V2Job.h>

#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Cce::V3::Model;

class HUAWEICLOUD_CCE_V3_EXPORT  CceSpecClient : public Client
{
    public:

    CceSpecClient();

    virtual ~CceSpecClient();

    static ClientBuilder<CceSpecClient> newBuilder();

    // 删除Job
    //
    // 该API用于删除指定项目下的Job。
    //
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAutopilotJobResponse> deleteAutopilotJob(
            DeleteAutopilotJobRequest &request
    );
    // 获取Job详情
    //
    // 该API用于获取指定项目下的Job详情。
    //
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetAutopilotOneJobResponse> getAutopilotOneJob(
            GetAutopilotOneJobRequest &request
    );
    // 获取Job列表
    //
    // 该API用于获取指定项目下的所有jobs。
    //
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAutopilotJobsResponse> listAutopilotJobs(
            ListAutopilotJobsRequest &request
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

template class HUAWEICLOUD_CCE_V3_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Cce::V3::CceSpecClient>;

#endif // HUAWEICLOUD_SDK_CCE_V3_CceSpecClient_H_