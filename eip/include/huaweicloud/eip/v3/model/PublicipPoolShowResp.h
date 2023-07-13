
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_PublicipPoolShowResp_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_PublicipPoolShowResp_H_

#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/eip/v3/model/BillingInfoDict.h>
#include <vector>
#include <huaweicloud/eip/v3/model/TagsInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 公网IP池详情
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  PublicipPoolShowResp
    : public ModelBase
{
public:
    PublicipPoolShowResp();
    virtual ~PublicipPoolShowResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PublicipPoolShowResp members

    /// <summary>
    /// 公网IP池id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 公网IP池名字
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 取值, spec_bgp(专属离散动态), spec_sbgp(专属离散静态)
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 租户id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 池子大小
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 已经使用的ip数量
    /// </summary>

    int32_t getUsed() const;
    bool usedIsSet() const;
    void unsetused();
    void setUsed(int32_t value);

    /// <summary>
    /// 公网IP池创建时间
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 公网IP池更新时间
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BillingInfoDict getBillingInfo() const;
    bool billingInfoIsSet() const;
    void unsetbillingInfo();
    void setBillingInfo(const BillingInfoDict& value);

    /// <summary>
    /// 功能说明：中心还是边缘。公网IP池取值为center
    /// </summary>

    std::string getPublicBorderGroup() const;
    bool publicBorderGroupIsSet() const;
    void unsetpublicBorderGroup();
    void setPublicBorderGroup(const std::string& value);

    /// <summary>
    /// 功能说明：是否共享
    /// </summary>

    bool isShared() const;
    bool sharedIsSet() const;
    void unsetshared();
    void setShared(bool value);

    /// <summary>
    /// 功能说明：是否公共池
    /// </summary>

    bool isIsCommon() const;
    bool isCommonIsSet() const;
    void unsetisCommon();
    void setIsCommon(bool value);

    /// <summary>
    /// 默认不显示。用户标签
    /// </summary>

    std::vector<TagsInfo>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagsInfo>& value);

    /// <summary>
    /// 功能说明：企业项目ID。最大长度36字节,带“-”连字符的UUID格式,或者是字符串“0”。创建弹性公网IP时,给弹性公网IP绑定企业项目ID。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 功能说明：表示此publicip可以加入的共享带宽类型列表，如果为空列表，则表示该           publicip不能加入任何共享带宽 约束：publicip只能加入到有该带宽类型的共享带宽中
    /// </summary>

    std::vector<std::string>& getAllowShareBandwidthTypes();
    bool allowShareBandwidthTypesIsSet() const;
    void unsetallowShareBandwidthTypes();
    void setAllowShareBandwidthTypes(const std::vector<std::string>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    int32_t used_;
    bool usedIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    BillingInfoDict billingInfo_;
    bool billingInfoIsSet_;
    std::string publicBorderGroup_;
    bool publicBorderGroupIsSet_;
    bool shared_;
    bool sharedIsSet_;
    bool isCommon_;
    bool isCommonIsSet_;
    std::vector<TagsInfo> tags_;
    bool tagsIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::vector<std::string> allowShareBandwidthTypes_;
    bool allowShareBandwidthTypesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_PublicipPoolShowResp_H_
