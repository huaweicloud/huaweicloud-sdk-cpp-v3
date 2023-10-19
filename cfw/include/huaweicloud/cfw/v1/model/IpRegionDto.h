
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_IpRegionDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_IpRegionDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  IpRegionDto
    : public ModelBase
{
public:
    IpRegionDto();
    virtual ~IpRegionDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IpRegionDto members

    /// <summary>
    /// 区域id
    /// </summary>

    std::string getRegionId() const;
    bool regionIdIsSet() const;
    void unsetregionId();
    void setRegionId(const std::string& value);

    /// <summary>
    /// 中文描述
    /// </summary>

    std::string getDescriptionCn() const;
    bool descriptionCnIsSet() const;
    void unsetdescriptionCn();
    void setDescriptionCn(const std::string& value);

    /// <summary>
    /// 英文描述
    /// </summary>

    std::string getDescriptionEn() const;
    bool descriptionEnIsSet() const;
    void unsetdescriptionEn();
    void setDescriptionEn(const std::string& value);

    /// <summary>
    /// 区域类型，0表示国家，1表示省份，2表示大洲
    /// </summary>

    int32_t getRegionType() const;
    bool regionTypeIsSet() const;
    void unsetregionType();
    void setRegionType(int32_t value);


protected:
    std::string regionId_;
    bool regionIdIsSet_;
    std::string descriptionCn_;
    bool descriptionCnIsSet_;
    std::string descriptionEn_;
    bool descriptionEnIsSet_;
    int32_t regionType_;
    bool regionTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_IpRegionDto_H_
