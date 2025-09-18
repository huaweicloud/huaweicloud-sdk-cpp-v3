
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateEndpointGroupOption_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateEndpointGroupOption_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新终端节点组的详细信息。
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  UpdateEndpointGroupOption
    : public ModelBase
{
public:
    UpdateEndpointGroupOption();
    virtual ~UpdateEndpointGroupOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateEndpointGroupOption members

    /// <summary>
    /// 终端节点组名称，取值范围：1~64个字符之间，只能由数字、字母、中划线和中文组成。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 终端节点组描述信息，取值范围：0~255个字符之间，禁止输入字符：&lt;&gt;。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 流量拨分到此组的百分比。
    /// </summary>

    int32_t getTrafficDialPercentage() const;
    bool trafficDialPercentageIsSet() const;
    void unsettrafficDialPercentage();
    void setTrafficDialPercentage(int32_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int32_t trafficDialPercentage_;
    bool trafficDialPercentageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateEndpointGroupOption_H_
