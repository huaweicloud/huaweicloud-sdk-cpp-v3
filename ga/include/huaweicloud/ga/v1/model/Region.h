
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_Region_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_Region_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 区域。
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  Region
    : public ModelBase
{
public:
    Region();
    virtual ~Region();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Region members

    /// <summary>
    /// 区域ID。
    /// </summary>

    std::string getRegionId() const;
    bool regionIdIsSet() const;
    void unsetregionId();
    void setRegionId(const std::string& value);

    /// <summary>
    /// 区域所属地区，取值： - OUTOFCM： 中国大陆以外 - CM：中国大陆
    /// </summary>

    std::string getArea() const;
    bool areaIsSet() const;
    void unsetarea();
    void setArea(const std::string& value);

    /// <summary>
    /// 区域支持的终端节点类型。取值： EIP：弹性公网IP
    /// </summary>

    std::vector<std::string>& getSupportedEndpointTypes();
    bool supportedEndpointTypesIsSet() const;
    void unsetsupportedEndpointTypes();
    void setSupportedEndpointTypes(const std::vector<std::string>& value);


protected:
    std::string regionId_;
    bool regionIdIsSet_;
    std::string area_;
    bool areaIsSet_;
    std::vector<std::string> supportedEndpointTypes_;
    bool supportedEndpointTypesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_Region_H_
