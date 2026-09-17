
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_DRInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_DRInfo_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 容灾信息。 **约束限制：** 创建容灾实例时必传。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  DRInfo
    : public ModelBase
{
public:
    DRInfo();
    virtual ~DRInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DRInfo members

    /// <summary>
    /// **参数解释：** 容灾源实例ID。可以调用查询实例列表和详情-QueryingInstancesandDetails接口获取。 **约束限制：** - 创建容灾实例时该参数必传，表示为该源实例创建容灾实例。 - 源实例为GeminiDB Cassandra实例。 - 源实例状态为正常。 - 传该参数时，Datastore的type参数的值必须为“cassandra”。 - 一个源实例只能有一个容灾实例。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getSourceInstanceId() const;
    bool sourceInstanceIdIsSet() const;
    void unsetsourceInstanceId();
    void setSourceInstanceId(const std::string& value);


protected:
    std::string sourceInstanceId_;
    bool sourceInstanceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_DRInfo_H_
