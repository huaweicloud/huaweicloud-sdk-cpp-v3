
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/geip/v3/model/AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info_tags.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info
    : public ModelBase
{
public:
    AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info();
    virtual ~AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info members

    /// <summary>
    /// ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 资源名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 资源的企业项目id
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 计费模式
    /// </summary>

    std::string getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getBandwidth() const;
    bool bandwidthIsSet() const;
    void unsetbandwidth();
    void setBandwidth(int32_t value);

    /// <summary>
    /// 大小
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 骨干带宽的两端之一：A点
    /// </summary>

    std::string getLocalArea() const;
    bool localAreaIsSet() const;
    void unsetlocalArea();
    void setLocalArea(const std::string& value);

    /// <summary>
    /// 骨干带宽的两端之一：B点
    /// </summary>

    std::string getRemoteArea() const;
    bool remoteAreaIsSet() const;
    void unsetremoteArea();
    void setRemoteArea(const std::string& value);

    /// <summary>
    /// 全域弹性公网IP标签
    /// </summary>

    std::vector<AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info_tags>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info_tags>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string chargeMode_;
    bool chargeModeIsSet_;
    int32_t bandwidth_;
    bool bandwidthIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string localArea_;
    bool localAreaIsSet_;
    std::string remoteArea_;
    bool remoteAreaIsSet_;
    std::vector<AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info_tags> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info_H_
