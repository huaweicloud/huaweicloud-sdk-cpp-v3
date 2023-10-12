
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_DrillServerParams_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_DrillServerParams_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 容灾演练虚拟机数据结构
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  DrillServerParams
    : public ModelBase
{
public:
    DrillServerParams();
    virtual ~DrillServerParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DrillServerParams members

    /// <summary>
    /// 演练云服务器对应的保护实例ID。
    /// </summary>

    std::string getProtectedInstance() const;
    bool protectedInstanceIsSet() const;
    void unsetprotectedInstance();
    void setProtectedInstance(const std::string& value);

    /// <summary>
    /// 演练云服务器ID。
    /// </summary>

    std::string getDrillServerId() const;
    bool drillServerIdIsSet() const;
    void unsetdrillServerId();
    void setDrillServerId(const std::string& value);


protected:
    std::string protectedInstance_;
    bool protectedInstanceIsSet_;
    std::string drillServerId_;
    bool drillServerIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_DrillServerParams_H_
