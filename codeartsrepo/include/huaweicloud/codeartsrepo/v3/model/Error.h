
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_Error_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_Error_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  Error
    : public ModelBase
{
public:
    Error();
    virtual ~Error();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Error members

    /// <summary>
    /// 错误码
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 错误信息
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);


protected:
    std::string code_;
    bool codeIsSet_;
    std::string message_;
    bool messageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_Error_H_
