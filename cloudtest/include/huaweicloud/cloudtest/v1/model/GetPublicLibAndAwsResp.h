
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_GetPublicLibAndAwsResp_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_GetPublicLibAndAwsResp_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  GetPublicLibAndAwsResp
    : public ModelBase
{
public:
    GetPublicLibAndAwsResp();
    virtual ~GetPublicLibAndAwsResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetPublicLibAndAwsResp members

    /// <summary>
    /// 公共关键字分组信息
    /// </summary>

    std::string getAwTag() const;
    bool awTagIsSet() const;
    void unsetawTag();
    void setAwTag(const std::string& value);

    /// <summary>
    /// 公共关键字帮助文档链接
    /// </summary>

    std::string getDocumentLink() const;
    bool documentLinkIsSet() const;
    void unsetdocumentLink();
    void setDocumentLink(const std::string& value);

    /// <summary>
    /// 保留字段
    /// </summary>

    int32_t getIsFavorite() const;
    bool isFavoriteIsSet() const;
    void unsetisFavorite();
    void setIsFavorite(int32_t value);

    /// <summary>
    /// 公共关键字描述
    /// </summary>

    std::string getPublicAwDescription() const;
    bool publicAwDescriptionIsSet() const;
    void unsetpublicAwDescription();
    void setPublicAwDescription(const std::string& value);

    /// <summary>
    /// 公共关键字唯一ID
    /// </summary>

    std::string getPublicAwId() const;
    bool publicAwIdIsSet() const;
    void unsetpublicAwId();
    void setPublicAwId(const std::string& value);

    /// <summary>
    /// 公共关键库唯一ID
    /// </summary>

    std::string getPublicAwLibId() const;
    bool publicAwLibIdIsSet() const;
    void unsetpublicAwLibId();
    void setPublicAwLibId(const std::string& value);

    /// <summary>
    /// 公共关键字库名称
    /// </summary>

    std::string getPublicAwLibName() const;
    bool publicAwLibNameIsSet() const;
    void unsetpublicAwLibName();
    void setPublicAwLibName(const std::string& value);

    /// <summary>
    /// 保留字段
    /// </summary>

    int32_t getPublicAwMark() const;
    bool publicAwMarkIsSet() const;
    void unsetpublicAwMark();
    void setPublicAwMark(int32_t value);

    /// <summary>
    /// 公共关键字名称
    /// </summary>

    std::string getPublicAwName() const;
    bool publicAwNameIsSet() const;
    void unsetpublicAwName();
    void setPublicAwName(const std::string& value);


protected:
    std::string awTag_;
    bool awTagIsSet_;
    std::string documentLink_;
    bool documentLinkIsSet_;
    int32_t isFavorite_;
    bool isFavoriteIsSet_;
    std::string publicAwDescription_;
    bool publicAwDescriptionIsSet_;
    std::string publicAwId_;
    bool publicAwIdIsSet_;
    std::string publicAwLibId_;
    bool publicAwLibIdIsSet_;
    std::string publicAwLibName_;
    bool publicAwLibNameIsSet_;
    int32_t publicAwMark_;
    bool publicAwMarkIsSet_;
    std::string publicAwName_;
    bool publicAwNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_GetPublicLibAndAwsResp_H_
