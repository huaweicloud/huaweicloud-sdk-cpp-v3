
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListKeystoreSearchResponseBody_result_permission_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListKeystoreSearchResponseBody_result_permission_H_


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
/// 权限
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ListKeystoreSearchResponseBody_result_permission
    : public ModelBase
{
public:
    ListKeystoreSearchResponseBody_result_permission();
    virtual ~ListKeystoreSearchResponseBody_result_permission();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListKeystoreSearchResponseBody_result_permission members

    /// <summary>
    /// 文件ID
    /// </summary>

    std::string getKeystoreId() const;
    bool keystoreIdIsSet() const;
    void unsetkeystoreId();
    void setKeystoreId(const std::string& value);

    /// <summary>
    /// 是否有设置权限
    /// </summary>

    bool isSetting() const;
    bool settingIsSet() const;
    void unsetsetting();
    void setSetting(bool value);

    /// <summary>
    /// 是否有删除权限
    /// </summary>

    bool isDelete() const;
    bool deleteIsSet() const;
    void unsetdelete();
    void setDelete(bool value);

    /// <summary>
    /// 是否有修改权限
    /// </summary>

    bool isModify() const;
    bool modifyIsSet() const;
    void unsetmodify();
    void setModify(bool value);

    /// <summary>
    /// 是否有使用权限
    /// </summary>

    bool isUsage() const;
    bool usageIsSet() const;
    void unsetusage();
    void setUsage(bool value);


protected:
    std::string keystoreId_;
    bool keystoreIdIsSet_;
    bool setting_;
    bool settingIsSet_;
    bool delete_;
    bool deleteIsSet_;
    bool modify_;
    bool modifyIsSet_;
    bool usage_;
    bool usageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListKeystoreSearchResponseBody_result_permission_H_
