
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_GetHostGroupListRequestBody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_GetHostGroupListRequestBody_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/GetHostGroupListFilter.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  GetHostGroupListRequestBody
    : public ModelBase
{
public:
    GetHostGroupListRequestBody();
    virtual ~GetHostGroupListRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetHostGroupListRequestBody members

    /// <summary>
    /// 主机组ID
    /// </summary>

    std::vector<std::string>& getHostGroupIdList();
    bool hostGroupIdListIsSet() const;
    void unsethostGroupIdList();
    void setHostGroupIdList(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    GetHostGroupListFilter getFilter() const;
    bool filterIsSet() const;
    void unsetfilter();
    void setFilter(const GetHostGroupListFilter& value);


protected:
    std::vector<std::string> hostGroupIdList_;
    bool hostGroupIdListIsSet_;
    GetHostGroupListFilter filter_;
    bool filterIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_GetHostGroupListRequestBody_H_
