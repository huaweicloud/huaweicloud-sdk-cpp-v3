
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowInstanceParamGroupDetailResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowInstanceParamGroupDetailResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/ConfigurationParameterResult.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ShowInstanceParamGroupDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowInstanceParamGroupDetailResponse();
    virtual ~ShowInstanceParamGroupDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowInstanceParamGroupDetailResponse members

    /// <summary>
    /// **参数解释**: 实例对应参数组ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**: 引擎版本。 **取值范围**: 不涉及。
    /// </summary>

    std::string getDatastoreVersion() const;
    bool datastoreVersionIsSet() const;
    void unsetdatastoreVersion();
    void setDatastoreVersion(const std::string& value);

    /// <summary>
    /// **参数解释**: 引擎名称。 **取值范围**: 不涉及。
    /// </summary>

    std::string getDatastoreName() const;
    bool datastoreNameIsSet() const;
    void unsetdatastoreName();
    void setDatastoreName(const std::string& value);

    /// <summary>
    /// **参数解释**: 创建时间，格式为\&quot;yyyy-MM-dd HH:mm:ss\&quot;。 **取值范围**: 不涉及。
    /// </summary>

    std::string getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(const std::string& value);

    /// <summary>
    /// **参数解释**: 更新时间，格式为\&quot;yyyy-MM-dd HH:mm:ss\&quot;。 **取值范围**: 不涉及。
    /// </summary>

    std::string getUpdated() const;
    bool updatedIsSet() const;
    void unsetupdated();
    void setUpdated(const std::string& value);

    /// <summary>
    /// **参数解释**: 参数对象，用户基于默认参数模板自定义的参数配置，具体请参考ConfigurationParameterResult。
    /// </summary>

    std::vector<ConfigurationParameterResult>& getConfigurationParameters();
    bool configurationParametersIsSet() const;
    void unsetconfigurationParameters();
    void setConfigurationParameters(const std::vector<ConfigurationParameterResult>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string datastoreVersion_;
    bool datastoreVersionIsSet_;
    std::string datastoreName_;
    bool datastoreNameIsSet_;
    std::string created_;
    bool createdIsSet_;
    std::string updated_;
    bool updatedIsSet_;
    std::vector<ConfigurationParameterResult> configurationParameters_;
    bool configurationParametersIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowInstanceParamGroupDetailResponse_H_
