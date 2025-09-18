
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_CreateEndpointGroupOption_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_CreateEndpointGroupOption_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ga/v1/model/Id.h>
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
/// 创建终端节点组的详细信息。
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  CreateEndpointGroupOption
    : public ModelBase
{
public:
    CreateEndpointGroupOption();
    virtual ~CreateEndpointGroupOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateEndpointGroupOption members

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

    /// <summary>
    /// 终端节点组所属区域ID。
    /// </summary>

    std::string getRegionId() const;
    bool regionIdIsSet() const;
    void unsetregionId();
    void setRegionId(const std::string& value);

    /// <summary>
    /// 关联监听器列表。一个终端节点组下仅支持关联一个监听器。
    /// </summary>

    std::vector<Id>& getListeners();
    bool listenersIsSet() const;
    void unsetlisteners();
    void setListeners(const std::vector<Id>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int32_t trafficDialPercentage_;
    bool trafficDialPercentageIsSet_;
    std::string regionId_;
    bool regionIdIsSet_;
    std::vector<Id> listeners_;
    bool listenersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_CreateEndpointGroupOption_H_
