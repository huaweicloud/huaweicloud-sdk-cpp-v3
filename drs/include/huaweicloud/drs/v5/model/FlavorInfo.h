
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_FlavorInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_FlavorInfo_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 规格信息
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  FlavorInfo
    : public ModelBase
{
public:
    FlavorInfo();
    virtual ~FlavorInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FlavorInfo members

    /// <summary>
    /// 规格id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 云服务类型
    /// </summary>

    std::string getCloudServiceType() const;
    bool cloudServiceTypeIsSet() const;
    void unsetcloudServiceType();
    void setCloudServiceType(const std::string& value);

    /// <summary>
    /// 规格类型码
    /// </summary>

    std::string getSpecTypeCode() const;
    bool specTypeCodeIsSet() const;
    void unsetspecTypeCode();
    void setSpecTypeCode(const std::string& value);

    /// <summary>
    /// 规格码
    /// </summary>

    std::string getSpecCode() const;
    bool specCodeIsSet() const;
    void unsetspecCode();
    void setSpecCode(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string cloudServiceType_;
    bool cloudServiceTypeIsSet_;
    std::string specTypeCode_;
    bool specTypeCodeIsSet_;
    std::string specCode_;
    bool specCodeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_FlavorInfo_H_
