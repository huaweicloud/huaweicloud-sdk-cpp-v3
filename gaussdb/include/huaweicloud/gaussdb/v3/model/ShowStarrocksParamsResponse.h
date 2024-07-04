
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowStarrocksParamsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowStarrocksParamsResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ParameterConfigurationInfo.h>
#include <huaweicloud/gaussdb/v3/model/ParameterValuesInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowStarrocksParamsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowStarrocksParamsResponse();
    virtual ~ShowStarrocksParamsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowStarrocksParamsResponse members

    /// <summary>
    /// 
    /// </summary>

    ParameterConfigurationInfo getConfigurations() const;
    bool configurationsIsSet() const;
    void unsetconfigurations();
    void setConfigurations(const ParameterConfigurationInfo& value);

    /// <summary>
    /// 参数信息的总数。
    /// </summary>

    int64_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int64_t value);

    /// <summary>
    /// 参数对象。
    /// </summary>

    std::vector<ParameterValuesInfo>& getParameterValues();
    bool parameterValuesIsSet() const;
    void unsetparameterValues();
    void setParameterValues(const std::vector<ParameterValuesInfo>& value);


protected:
    ParameterConfigurationInfo configurations_;
    bool configurationsIsSet_;
    int64_t totalCount_;
    bool totalCountIsSet_;
    std::vector<ParameterValuesInfo> parameterValues_;
    bool parameterValuesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowStarrocksParamsResponse_H_
