
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_DeleteInstancesSessionRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_DeleteInstancesSessionRequestBody_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
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
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  DeleteInstancesSessionRequestBody
    : public ModelBase
{
public:
    DeleteInstancesSessionRequestBody();
    virtual ~DeleteInstancesSessionRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteInstancesSessionRequestBody members

    /// <summary>
    /// 是否删除全部会话。
    /// </summary>

    bool isIsAll() const;
    bool isAllIsSet() const;
    void unsetisAll();
    void setIsAll(bool value);

    /// <summary>
    /// 需要删除的会话id。is_all为false的时候，session_ids为必填，不能为空。
    /// </summary>

    std::vector<std::string>& getSessionIds();
    bool sessionIdsIsSet() const;
    void unsetsessionIds();
    void setSessionIds(const std::vector<std::string>& value);


protected:
    bool isAll_;
    bool isAllIsSet_;
    std::vector<std::string> sessionIds_;
    bool sessionIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_DeleteInstancesSessionRequestBody_H_
