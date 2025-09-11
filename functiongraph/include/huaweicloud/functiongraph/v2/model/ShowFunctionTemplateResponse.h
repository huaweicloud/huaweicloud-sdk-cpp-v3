
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowFunctionTemplateResponse_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowFunctionTemplateResponse_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/TempDetail.h>
#include <string>
#include <huaweicloud/functiongraph/v2/model/TriggerMetadataList.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ShowFunctionTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowFunctionTemplateResponse();
    virtual ~ShowFunctionTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowFunctionTemplateResponse members

    /// <summary>
    /// 模板id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 模板类型
    /// </summary>

    int32_t getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(int32_t value);

    /// <summary>
    /// 模板标题
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 模板名称
    /// </summary>

    std::string getTemplateName() const;
    bool templateNameIsSet() const;
    void unsettemplateName();
    void setTemplateName(const std::string& value);

    /// <summary>
    /// 模板描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 模板执行运行时
    /// </summary>

    std::string getRuntime() const;
    bool runtimeIsSet() const;
    void unsetruntime();
    void setRuntime(const std::string& value);

    /// <summary>
    /// 模板函数执行入口
    /// </summary>

    std::string getHandler() const;
    bool handlerIsSet() const;
    void unsethandler();
    void setHandler(const std::string& value);

    /// <summary>
    /// 代码类型
    /// </summary>

    std::string getCodeType() const;
    bool codeTypeIsSet() const;
    void unsetcodeType();
    void setCodeType(const std::string& value);

    /// <summary>
    /// 代码文件
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 函数执行超时时间，超时函数将被强行停止，范围3～259200秒。
    /// </summary>

    int32_t getTimeout() const;
    bool timeoutIsSet() const;
    void unsettimeout();
    void setTimeout(int32_t value);

    /// <summary>
    /// 内存大小
    /// </summary>

    int32_t getMemorySize() const;
    bool memorySizeIsSet() const;
    void unsetmemorySize();
    void setMemorySize(int32_t value);

    /// <summary>
    /// 触发信息列表
    /// </summary>

    std::vector<TriggerMetadataList>& getTriggerMetadataList();
    bool triggerMetadataListIsSet() const;
    void unsettriggerMetadataList();
    void setTriggerMetadataList(const std::vector<TriggerMetadataList>& value);

    /// <summary>
    /// 
    /// </summary>

    TempDetail getTempDetail() const;
    bool tempDetailIsSet() const;
    void unsettempDetail();
    void setTempDetail(const TempDetail& value);

    /// <summary>
    /// 用户数据
    /// </summary>

    std::string getUserData() const;
    bool userDataIsSet() const;
    void unsetuserData();
    void setUserData(const std::string& value);

    /// <summary>
    /// 加密用户数据
    /// </summary>

    std::string getEncryptedUserData() const;
    bool encryptedUserDataIsSet() const;
    void unsetencryptedUserData();
    void setEncryptedUserData(const std::string& value);

    /// <summary>
    /// 模板所需依赖列表
    /// </summary>

    std::vector<std::string>& getDependencies();
    bool dependenciesIsSet() const;
    void unsetdependencies();
    void setDependencies(const std::vector<std::string>& value);

    /// <summary>
    /// 模板使用场景
    /// </summary>

    std::string getScene() const;
    bool sceneIsSet() const;
    void unsetscene();
    void setScene(const std::string& value);

    /// <summary>
    /// 模板关联云服务
    /// </summary>

    std::string getService() const;
    bool serviceIsSet() const;
    void unsetservice();
    void setService(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    int32_t type_;
    bool typeIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string templateName_;
    bool templateNameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string runtime_;
    bool runtimeIsSet_;
    std::string handler_;
    bool handlerIsSet_;
    std::string codeType_;
    bool codeTypeIsSet_;
    std::string code_;
    bool codeIsSet_;
    int32_t timeout_;
    bool timeoutIsSet_;
    int32_t memorySize_;
    bool memorySizeIsSet_;
    std::vector<TriggerMetadataList> triggerMetadataList_;
    bool triggerMetadataListIsSet_;
    TempDetail tempDetail_;
    bool tempDetailIsSet_;
    std::string userData_;
    bool userDataIsSet_;
    std::string encryptedUserData_;
    bool encryptedUserDataIsSet_;
    std::vector<std::string> dependencies_;
    bool dependenciesIsSet_;
    std::string scene_;
    bool sceneIsSet_;
    std::string service_;
    bool serviceIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ShowFunctionTemplateResponse_H_
