
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_CreatePreheatingTasksResponse_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_CreatePreheatingTasksResponse_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  CreatePreheatingTasksResponse
    : public ModelBase, public HttpResponse
{
public:
    CreatePreheatingTasksResponse();
    virtual ~CreatePreheatingTasksResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreatePreheatingTasksResponse members

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getPreheatingTask() const;
    bool preheatingTaskIsSet() const;
    void unsetpreheatingTask();
    void setPreheatingTask(const std::string& value);


protected:
    std::string preheatingTask_;
    bool preheatingTaskIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_CreatePreheatingTasksResponse_H_
