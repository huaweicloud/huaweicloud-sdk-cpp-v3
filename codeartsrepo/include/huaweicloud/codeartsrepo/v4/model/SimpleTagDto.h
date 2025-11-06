
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_SimpleTagDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_SimpleTagDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/GpgKeyDto.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  SimpleTagDto
    : public ModelBase
{
public:
    SimpleTagDto();
    virtual ~SimpleTagDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SimpleTagDto members

    /// <summary>
    /// 标签名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 标签描述
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 目标commit_id
    /// </summary>

    std::string getTarget() const;
    bool targetIsSet() const;
    void unsettarget();
    void setTarget(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    GpgKeyDto getGpgKey() const;
    bool gpgKeyIsSet() const;
    void unsetgpgKey();
    void setGpgKey(const GpgKeyDto& value);

    /// <summary>
    /// 是否可以被删除
    /// </summary>

    bool isCanDelete() const;
    bool canDeleteIsSet() const;
    void unsetcanDelete();
    void setCanDelete(bool value);

    /// <summary>
    /// 是否可以被查看
    /// </summary>

    bool isCanRead() const;
    bool canReadIsSet() const;
    void unsetcanRead();
    void setCanRead(bool value);

    /// <summary>
    /// 是否可以被下载
    /// </summary>

    bool isCanDownload() const;
    bool canDownloadIsSet() const;
    void unsetcanDownload();
    void setCanDownload(bool value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::string target_;
    bool targetIsSet_;
    GpgKeyDto gpgKey_;
    bool gpgKeyIsSet_;
    bool canDelete_;
    bool canDeleteIsSet_;
    bool canRead_;
    bool canReadIsSet_;
    bool canDownload_;
    bool canDownloadIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_SimpleTagDto_H_
