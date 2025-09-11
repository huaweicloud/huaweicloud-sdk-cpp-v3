
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListRealTimeSessionsRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListRealTimeSessionsRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdbforopengauss/v3/model/SessionQueryInfoOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListRealTimeSessionsRequestBody
    : public ModelBase
{
public:
    ListRealTimeSessionsRequestBody();
    virtual ~ListRealTimeSessionsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRealTimeSessionsRequestBody members

    /// <summary>
    /// **参数解释**： 节点ID。 **约束限制**： 仅支持非日志类型的CN或DN节点。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// **参数解释**： 组件ID。 **约束限制**： 仅支持非日志类型的CN或DN节点。 **取值范围**： 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getComponentId() const;
    bool componentIdIsSet() const;
    void unsetcomponentId();
    void setComponentId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SessionQueryInfoOption getQueryInfo() const;
    bool queryInfoIsSet() const;
    void unsetqueryInfo();
    void setQueryInfo(const SessionQueryInfoOption& value);


protected:
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string componentId_;
    bool componentIdIsSet_;
    SessionQueryInfoOption queryInfo_;
    bool queryInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListRealTimeSessionsRequestBody_H_
