
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_GetHostListRequestBody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_GetHostListRequestBody_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/lts/v2/model/GetHostListFilter.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询主机信息请求体
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  GetHostListRequestBody
    : public ModelBase
{
public:
    GetHostListRequestBody();
    virtual ~GetHostListRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetHostListRequestBody members

    /// <summary>
    /// 主机ID列表。可以根据主机ID列表进行批量过滤
    /// </summary>

    std::vector<std::string>& getHostIdList();
    bool hostIdListIsSet() const;
    void unsethostIdList();
    void setHostIdList(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    GetHostListFilter getFilter() const;
    bool filterIsSet() const;
    void unsetfilter();
    void setFilter(const GetHostListFilter& value);


protected:
    std::vector<std::string> hostIdList_;
    bool hostIdListIsSet_;
    GetHostListFilter filter_;
    bool filterIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_GetHostListRequestBody_H_
