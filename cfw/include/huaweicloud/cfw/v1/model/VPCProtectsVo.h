
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_VPCProtectsVo_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_VPCProtectsVo_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/VpcAttachmentDetail.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// vpc protects vo
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  VPCProtectsVo
    : public ModelBase
{
public:
    VPCProtectsVo();
    virtual ~VPCProtectsVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VPCProtectsVo members

    /// <summary>
    /// 总VPC数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 本项目防护VPC数
    /// </summary>

    int32_t getSelfTotal() const;
    bool selfTotalIsSet() const;
    void unsetselfTotal();
    void setSelfTotal(int32_t value);

    /// <summary>
    /// 其他项目防护VPC数
    /// </summary>

    int32_t getOtherTotal() const;
    bool otherTotalIsSet() const;
    void unsetotherTotal();
    void setOtherTotal(int32_t value);

    /// <summary>
    /// 防护VPC
    /// </summary>

    std::vector<VpcAttachmentDetail>& getProtectVpcs();
    bool protectVpcsIsSet() const;
    void unsetprotectVpcs();
    void setProtectVpcs(const std::vector<VpcAttachmentDetail>& value);

    /// <summary>
    /// 本项目防护VPC
    /// </summary>

    std::vector<VpcAttachmentDetail>& getSelfProtectVpcs();
    bool selfProtectVpcsIsSet() const;
    void unsetselfProtectVpcs();
    void setSelfProtectVpcs(const std::vector<VpcAttachmentDetail>& value);

    /// <summary>
    /// 其他项目防护VPC
    /// </summary>

    std::vector<VpcAttachmentDetail>& getOtherProtectVpcs();
    bool otherProtectVpcsIsSet() const;
    void unsetotherProtectVpcs();
    void setOtherProtectVpcs(const std::vector<VpcAttachmentDetail>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    int32_t selfTotal_;
    bool selfTotalIsSet_;
    int32_t otherTotal_;
    bool otherTotalIsSet_;
    std::vector<VpcAttachmentDetail> protectVpcs_;
    bool protectVpcsIsSet_;
    std::vector<VpcAttachmentDetail> selfProtectVpcs_;
    bool selfProtectVpcsIsSet_;
    std::vector<VpcAttachmentDetail> otherProtectVpcs_;
    bool otherProtectVpcsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_VPCProtectsVo_H_
