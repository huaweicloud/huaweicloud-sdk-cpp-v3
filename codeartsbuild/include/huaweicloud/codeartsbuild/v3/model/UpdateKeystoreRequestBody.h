
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_UpdateKeystoreRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_UpdateKeystoreRequestBody_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// job_ids列表
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  UpdateKeystoreRequestBody
    : public ModelBase
{
public:
    UpdateKeystoreRequestBody();
    virtual ~UpdateKeystoreRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateKeystoreRequestBody members

    /// <summary>
    /// 文件ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 文件描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 文件名
    /// </summary>

    std::string getKeystoreName() const;
    bool keystoreNameIsSet() const;
    void unsetkeystoreName();
    void setKeystoreName(const std::string& value);

    /// <summary>
    /// 是否租户内共享，1-共享，0-不共享
    /// </summary>

    int32_t getShare() const;
    bool shareIsSet() const;
    void unsetshare();
    void setShare(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string keystoreName_;
    bool keystoreNameIsSet_;
    int32_t share_;
    bool shareIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_UpdateKeystoreRequestBody_H_
