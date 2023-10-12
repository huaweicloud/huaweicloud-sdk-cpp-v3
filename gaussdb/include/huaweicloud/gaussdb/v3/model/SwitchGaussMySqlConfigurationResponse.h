
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SwitchGaussMySqlConfigurationResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SwitchGaussMySqlConfigurationResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  SwitchGaussMySqlConfigurationResponse
    : public ModelBase, public HttpResponse
{
public:
    SwitchGaussMySqlConfigurationResponse();
    virtual ~SwitchGaussMySqlConfigurationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchGaussMySqlConfigurationResponse members

    /// <summary>
    /// 应用参数模板的任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SwitchGaussMySqlConfigurationResponse_H_
