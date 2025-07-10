
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_EnrollAccountRequestBody_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_EnrollAccountRequestBody_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rgc/v1/model/Blueprint.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 纳管账号。
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  EnrollAccountRequestBody
    : public ModelBase
{
public:
    EnrollAccountRequestBody();
    virtual ~EnrollAccountRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EnrollAccountRequestBody members

    /// <summary>
    /// 注册OU 标识。
    /// </summary>

    std::string getParentOrganizationalUnitId() const;
    bool parentOrganizationalUnitIdIsSet() const;
    void unsetparentOrganizationalUnitId();
    void setParentOrganizationalUnitId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Blueprint getBlueprint() const;
    bool blueprintIsSet() const;
    void unsetblueprint();
    void setBlueprint(const Blueprint& value);


protected:
    std::string parentOrganizationalUnitId_;
    bool parentOrganizationalUnitIdIsSet_;
    Blueprint blueprint_;
    bool blueprintIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_EnrollAccountRequestBody_H_
