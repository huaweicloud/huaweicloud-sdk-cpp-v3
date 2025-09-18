
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_ListenerDetail_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_ListenerDetail_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ga/v1/model/ListenerProtocol.h>
#include <huaweicloud/ga/v1/model/PortRange.h>
#include <string>
#include <huaweicloud/ga/v1/model/ConfigStatus.h>
#include <cpprest/details/basic_types.h>
#include <huaweicloud/ga/v1/model/FrozenInfo.h>
#include <huaweicloud/ga/v1/model/ResourceTag.h>
#include <vector>
#include <huaweicloud/ga/v1/model/ClientAffinity.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 监听器实例。
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  ListenerDetail
    : public ModelBase
{
public:
    ListenerDetail();
    virtual ~ListenerDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListenerDetail members

    /// <summary>
    /// 监听器ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 监听器名称，取值范围：1~64个字符之间，只能由数字、字母、中划线和中文组成。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 监听器的描述信息，取值范围：0~255个字符之间，禁止输入字符：&lt;&gt;。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ListenerProtocol getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const ListenerProtocol& value);

    /// <summary>
    /// 
    /// </summary>

    ConfigStatus getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const ConfigStatus& value);

    /// <summary>
    /// 监听端口范围列表。
    /// </summary>

    std::vector<PortRange>& getPortRanges();
    bool portRangesIsSet() const;
    void unsetportRanges();
    void setPortRanges(const std::vector<PortRange>& value);

    /// <summary>
    /// 
    /// </summary>

    ClientAffinity getClientAffinity() const;
    bool clientAffinityIsSet() const;
    void unsetclientAffinity();
    void setClientAffinity(const ClientAffinity& value);

    /// <summary>
    /// 全球加速实例ID。
    /// </summary>

    std::string getAcceleratorId() const;
    bool acceleratorIdIsSet() const;
    void unsetacceleratorId();
    void setAcceleratorId(const std::string& value);

    /// <summary>
    /// 创建时间。
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 更新时间。
    /// </summary>

    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);

    /// <summary>
    /// 租户ID。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    FrozenInfo getFrozenInfo() const;
    bool frozenInfoIsSet() const;
    void unsetfrozenInfo();
    void setFrozenInfo(const FrozenInfo& value);

    /// <summary>
    /// 标签列表。
    /// </summary>

    std::vector<ResourceTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTag>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    ListenerProtocol protocol_;
    bool protocolIsSet_;
    ConfigStatus status_;
    bool statusIsSet_;
    std::vector<PortRange> portRanges_;
    bool portRangesIsSet_;
    ClientAffinity clientAffinity_;
    bool clientAffinityIsSet_;
    std::string acceleratorId_;
    bool acceleratorIdIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    FrozenInfo frozenInfo_;
    bool frozenInfoIsSet_;
    std::vector<ResourceTag> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_ListenerDetail_H_
