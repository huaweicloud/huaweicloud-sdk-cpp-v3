
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_ShareBandwidthTypeShowResp_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_ShareBandwidthTypeShowResp_H_

#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 带宽支持类型对象
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  ShareBandwidthTypeShowResp
    : public ModelBase
{
public:
    ShareBandwidthTypeShowResp();
    virtual ~ShareBandwidthTypeShowResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShareBandwidthTypeShowResp members

    /// <summary>
    /// 支持带宽类型的id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 带宽类型
    /// </summary>

    std::string getBandwidthType() const;
    bool bandwidthTypeIsSet() const;
    void unsetbandwidthType();
    void setBandwidthType(const std::string& value);

    /// <summary>
    /// 中心站点or边缘站点，默认展示
    /// </summary>

    std::string getPublicBorderGroup() const;
    bool publicBorderGroupIsSet() const;
    void unsetpublicBorderGroup();
    void setPublicBorderGroup(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// 带宽类型的英文表述
    /// </summary>

    std::string getNameEn() const;
    bool nameEnIsSet() const;
    void unsetnameEn();
    void setNameEn(const std::string& value);

    /// <summary>
    /// 带宽类型的中文表述
    /// </summary>

    std::string getNameZh() const;
    bool nameZhIsSet() const;
    void unsetnameZh();
    void setNameZh(const std::string& value);

    /// <summary>
    /// 带宽类型描述信息
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string bandwidthType_;
    bool bandwidthTypeIsSet_;
    std::string publicBorderGroup_;
    bool publicBorderGroupIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    std::string nameEn_;
    bool nameEnIsSet_;
    std::string nameZh_;
    bool nameZhIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_ShareBandwidthTypeShowResp_H_
