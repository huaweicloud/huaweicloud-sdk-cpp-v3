
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_CreateConfigurationRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_CreateConfigurationRequestBody_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbfornosql/v3/model/CreateConfigurationDatastoreOption.h>
#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  CreateConfigurationRequestBody
    : public ModelBase
{
public:
    CreateConfigurationRequestBody();
    virtual ~CreateConfigurationRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateConfigurationRequestBody members

    /// <summary>
    /// **参数解释：** 参数模板名称。 **约束限制：** 最长64个字符，只允许大写字母、小写字母、数字、和“-_.”特殊字符。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 参数模板描述。 **约束限制：** 最长256个字符，不支持&gt;!&lt;\&quot;&amp;&#39;&#x3D;特殊字符。 **取值范围：** 不涉及。 **默认取值：** 空。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateConfigurationDatastoreOption getDatastore() const;
    bool datastoreIsSet() const;
    void unsetdatastore();
    void setDatastore(const CreateConfigurationDatastoreOption& value);

    /// <summary>
    /// **参数解释：** 参数值对象，用户基于默认参数模板自定义的参数值。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 默认不修改参数值。
    /// </summary>

    std::map<std::string, std::string>& getValues();
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const std::map<std::string, std::string>& value);

    /// <summary>
    /// **参数解释：** 实例ID。 **约束限制：** 实例ID可以调用“查询实例列表和详情”接口获取。如果未申请实例，可以调用“创建实例”接口创建。 若传入此参数，则会基于此实例的参数信息创建参数模板。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    CreateConfigurationDatastoreOption datastore_;
    bool datastoreIsSet_;
    std::map<std::string, std::string> values_;
    bool valuesIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_CreateConfigurationRequestBody_H_
