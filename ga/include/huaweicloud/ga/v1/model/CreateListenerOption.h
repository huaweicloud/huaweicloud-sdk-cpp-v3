
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_CreateListenerOption_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_CreateListenerOption_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ga/v1/model/ListenerProtocol.h>
#include <huaweicloud/ga/v1/model/PortRange.h>
#include <string>
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
/// 创建监听器的详细信息。
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  CreateListenerOption
    : public ModelBase
{
public:
    CreateListenerOption();
    virtual ~CreateListenerOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateListenerOption members

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
    /// 标签列表。
    /// </summary>

    std::vector<ResourceTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTag>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    ListenerProtocol protocol_;
    bool protocolIsSet_;
    std::vector<PortRange> portRanges_;
    bool portRangesIsSet_;
    ClientAffinity clientAffinity_;
    bool clientAffinityIsSet_;
    std::string acceleratorId_;
    bool acceleratorIdIsSet_;
    std::vector<ResourceTag> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_CreateListenerOption_H_
