
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_Params_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_Params_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsbuild/v3/model/Constraints.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 构建参数
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  Params
    : public ModelBase
{
public:
    Params();
    virtual ~Params();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Params members

    /// <summary>
    /// 参数名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 名称
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 必填
    /// </summary>

    bool isRequired() const;
    bool requiredIsSet() const;
    void unsetrequired();
    void setRequired(bool value);

    /// <summary>
    /// 简要构建信息列表
    /// </summary>

    std::vector<Constraints>& getConstraints();
    bool constraintsIsSet() const;
    void unsetconstraints();
    void setConstraints(const std::vector<Constraints>& value);

    /// <summary>
    /// 删除
    /// </summary>

    bool isDeletion() const;
    bool deletionIsSet() const;
    void unsetdeletion();
    void setDeletion(bool value);

    /// <summary>
    /// 默认
    /// </summary>

    bool isDefaults() const;
    bool defaultsIsSet() const;
    void unsetdefaults();
    void setDefaults(bool value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string type_;
    bool typeIsSet_;
    bool required_;
    bool requiredIsSet_;
    std::vector<Constraints> constraints_;
    bool constraintsIsSet_;
    bool deletion_;
    bool deletionIsSet_;
    bool defaults_;
    bool defaultsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_Params_H_
