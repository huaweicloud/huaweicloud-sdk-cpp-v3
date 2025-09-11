
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_OBSTriggerConfig_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_OBSTriggerConfig_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 触发器结构体
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  OBSTriggerConfig
    : public ModelBase
{
public:
    OBSTriggerConfig();
    virtual ~OBSTriggerConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OBSTriggerConfig members

    /// <summary>
    /// OBS桶名（trigger_type为OBS时配置）
    /// </summary>

    std::string getBucket() const;
    bool bucketIsSet() const;
    void unsetbucket();
    void setBucket(const std::string& value);

    /// <summary>
    /// OBS事件列表（trigger_type为OBS时配置）
    /// </summary>

    std::vector<std::string>& getEvents();
    bool eventsIsSet() const;
    void unsetevents();
    void setEvents(const std::vector<std::string>& value);

    /// <summary>
    /// 对象名前缀（trigger_type为OBS时配置）
    /// </summary>

    std::string getPrefix() const;
    bool prefixIsSet() const;
    void unsetprefix();
    void setPrefix(const std::string& value);

    /// <summary>
    /// 对象名后缀（trigger_type为OBS时配置）
    /// </summary>

    std::string getSuffix() const;
    bool suffixIsSet() const;
    void unsetsuffix();
    void setSuffix(const std::string& value);


protected:
    std::string bucket_;
    bool bucketIsSet_;
    std::vector<std::string> events_;
    bool eventsIsSet_;
    std::string prefix_;
    bool prefixIsSet_;
    std::string suffix_;
    bool suffixIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_OBSTriggerConfig_H_
