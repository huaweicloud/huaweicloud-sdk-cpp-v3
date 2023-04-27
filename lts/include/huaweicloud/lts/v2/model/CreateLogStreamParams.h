
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateLogStreamParams_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateLogStreamParams_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建日志流参数。
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  CreateLogStreamParams
    : public ModelBase
{
public:
    CreateLogStreamParams();
    virtual ~CreateLogStreamParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateLogStreamParams members

    /// <summary>
    /// 需要创建的日志流名称
    /// </summary>

    std::string getLogStreamName() const;
    bool logStreamNameIsSet() const;
    void unsetlogStreamName();
    void setLogStreamName(const std::string& value);


protected:
    std::string logStreamName_;
    bool logStreamNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateLogStreamParams_H_
