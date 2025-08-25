
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowChartResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowChartResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ShowChartResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowChartResponse();
    virtual ~ShowChartResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowChartResponse members

    /// <summary>
    /// 模板ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 模板名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 模板值
    /// </summary>

    std::string getValues() const;
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const std::string& value);

    /// <summary>
    /// 模板翻译资源
    /// </summary>

    std::string getTranslate() const;
    bool translateIsSet() const;
    void unsettranslate();
    void setTranslate(const std::string& value);

    /// <summary>
    /// 模板介绍
    /// </summary>

    std::string getInstruction() const;
    bool instructionIsSet() const;
    void unsetinstruction();
    void setInstruction(const std::string& value);

    /// <summary>
    /// 模板版本
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 模板描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 模板的来源
    /// </summary>

    std::string getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const std::string& value);

    /// <summary>
    /// 模板的图标链接
    /// </summary>

    std::string getIconUrl() const;
    bool iconUrlIsSet() const;
    void unseticonUrl();
    void setIconUrl(const std::string& value);

    /// <summary>
    /// 是否公开模板
    /// </summary>

    bool isPublic() const;
    bool publicIsSet() const;
    void unsetpublic();
    void setPublic(bool value);

    /// <summary>
    /// 模板的链接
    /// </summary>

    std::string getChartUrl() const;
    bool chartUrlIsSet() const;
    void unsetchartUrl();
    void setChartUrl(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdateAt() const;
    bool updateAtIsSet() const;
    void unsetupdateAt();
    void setUpdateAt(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string values_;
    bool valuesIsSet_;
    std::string translate_;
    bool translateIsSet_;
    std::string instruction_;
    bool instructionIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string source_;
    bool sourceIsSet_;
    std::string iconUrl_;
    bool iconUrlIsSet_;
    bool public_;
    bool publicIsSet_;
    std::string chartUrl_;
    bool chartUrlIsSet_;
    std::string createAt_;
    bool createAtIsSet_;
    std::string updateAt_;
    bool updateAtIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowChartResponse_H_
