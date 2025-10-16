
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowResourceDetailAccessKeyResponse_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowResourceDetailAccessKeyResponse_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cpcs/v1/model/ShowResourceDetailAccessKeyResponseBody_ak_list.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowResourceDetailAccessKeyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowResourceDetailAccessKeyResponse();
    virtual ~ShowResourceDetailAccessKeyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowResourceDetailAccessKeyResponse members

    /// <summary>
    /// 资源名称
    /// </summary>

    std::string getMetricName() const;
    bool metricNameIsSet() const;
    void unsetmetricName();
    void setMetricName(const std::string& value);

    /// <summary>
    /// 访问密钥列表
    /// </summary>

    std::vector<ShowResourceDetailAccessKeyResponseBody_ak_list>& getAkList();
    bool akListIsSet() const;
    void unsetakList();
    void setAkList(const std::vector<ShowResourceDetailAccessKeyResponseBody_ak_list>& value);

    /// <summary>
    /// 访问密钥总数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::string metricName_;
    bool metricNameIsSet_;
    std::vector<ShowResourceDetailAccessKeyResponseBody_ak_list> akList_;
    bool akListIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowResourceDetailAccessKeyResponse_H_
