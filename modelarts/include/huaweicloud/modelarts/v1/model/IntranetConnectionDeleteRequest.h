
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_IntranetConnectionDeleteRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_IntranetConnectionDeleteRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  IntranetConnectionDeleteRequest
    : public ModelBase
{
public:
    IntranetConnectionDeleteRequest();
    virtual ~IntranetConnectionDeleteRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IntranetConnectionDeleteRequest members

    /// <summary>
    /// 内网接入的id列表
    /// </summary>

    std::vector<std::string>& getIntranetConnectionIds();
    bool intranetConnectionIdsIsSet() const;
    void unsetintranetConnectionIds();
    void setIntranetConnectionIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> intranetConnectionIds_;
    bool intranetConnectionIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_IntranetConnectionDeleteRequest_H_
