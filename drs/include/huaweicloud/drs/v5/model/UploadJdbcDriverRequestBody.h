
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_UploadJdbcDriverRequestBody_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_UploadJdbcDriverRequestBody_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/HttpContent.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  UploadJdbcDriverRequestBody
    : public ModelBase
{
public:
    UploadJdbcDriverRequestBody();
    virtual ~UploadJdbcDriverRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UploadJdbcDriverRequestBody members

    /// <summary>
    /// 驱动文件，驱动文件名称长度5-64，以jar结尾，name相同会替换远程驱动文件
    /// </summary>

    HttpContent getFile() const;
    bool fileIsSet() const;
    void unsetfile();
    void setFile(const HttpContent& value);


protected:
    HttpContent file_;
    bool fileIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_UploadJdbcDriverRequestBody_H_
