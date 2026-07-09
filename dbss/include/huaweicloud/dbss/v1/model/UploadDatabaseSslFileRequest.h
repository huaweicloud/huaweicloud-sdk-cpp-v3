
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_UploadDatabaseSslFileRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_UploadDatabaseSslFileRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  UploadDatabaseSslFileRequest
    : public ModelBase
{
public:
    UploadDatabaseSslFileRequest();
    virtual ~UploadDatabaseSslFileRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UploadDatabaseSslFileRequest members

    /// <summary>
    /// 私钥文本内容
    /// </summary>

    std::string getPemKeyTxt() const;
    bool pemKeyTxtIsSet() const;
    void unsetpemKeyTxt();
    void setPemKeyTxt(const std::string& value);


protected:
    std::string pemKeyTxt_;
    bool pemKeyTxtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_UploadDatabaseSslFileRequest_H_
