
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeTemplate_extendParam_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeTemplate_extendParam_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  NodeTemplate_extendParam
    : public ModelBase
{
public:
    NodeTemplate_extendParam();
    virtual ~NodeTemplate_extendParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeTemplate_extendParam members

    /// <summary>
    /// 
    /// </summary>

    std::string getUserID() const;
    bool userIDIsSet() const;
    void unsetuserID();
    void setUserID(const std::string& value);


protected:
    std::string userID_;
    bool userIDIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeTemplate_extendParam_H_
