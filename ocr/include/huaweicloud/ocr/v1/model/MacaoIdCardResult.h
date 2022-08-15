
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_MacaoIdCardResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_MacaoIdCardResult_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_OCR_V1_EXPORT  MacaoIdCardResult
    : public ModelBase
{
public:
    MacaoIdCardResult();
    virtual ~MacaoIdCardResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MacaoIdCardResult members

    /// <summary>
    /// 证件图片正反面信息。可选值包括： - \&quot;front\&quot;: 证件图片为正面 - \&quot;back\&quot;: 证件图片为反面 
    /// </summary>

    std::string getSide() const;
    bool sideIsSet() const;
    void unsetside();
    void setSide(const std::string& value);

    /// <summary>
    /// 姓名。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 英文姓名，姓名单词之间使用空格进行间隔。 
    /// </summary>

    std::string getNameEn() const;
    bool nameEnIsSet() const;
    void unsetnameEn();
    void setNameEn(const std::string& value);

    /// <summary>
    /// 性别，返回“男”或“女”。 
    /// </summary>

    std::string getSex() const;
    bool sexIsSet() const;
    void unsetsex();
    void setSex(const std::string& value);

    /// <summary>
    /// 本次发证日期。 
    /// </summary>

    std::string getIssueDate() const;
    bool issueDateIsSet() const;
    void unsetissueDate();
    void setIssueDate(const std::string& value);

    /// <summary>
    /// 证件有效期。 
    /// </summary>

    std::string getExpiryDate() const;
    bool expiryDateIsSet() const;
    void unsetexpiryDate();
    void setExpiryDate(const std::string& value);

    /// <summary>
    /// 出生日期。 
    /// </summary>

    std::string getBirthDate() const;
    bool birthDateIsSet() const;
    void unsetbirthDate();
    void setBirthDate(const std::string& value);

    /// <summary>
    /// 首次发证日期。 
    /// </summary>

    std::string getInitialIssueDate() const;
    bool initialIssueDateIsSet() const;
    void unsetinitialIssueDate();
    void setInitialIssueDate(const std::string& value);

    /// <summary>
    /// 身高。 
    /// </summary>

    std::string getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(const std::string& value);

    /// <summary>
    /// 身份证号。 
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 身份证上的字母代码，表示出生地等信息。 
    /// </summary>

    std::string getSymbols() const;
    bool symbolsIsSet() const;
    void unsetsymbols();
    void setSymbols(const std::string& value);

    /// <summary>
    /// 身份证背面第一行机器码。 
    /// </summary>

    std::string getMachineCode1() const;
    bool machineCode1IsSet() const;
    void unsetmachineCode1();
    void setMachineCode1(const std::string& value);

    /// <summary>
    /// 身份证背面第二行机器码。 
    /// </summary>

    std::string getMachineCode2() const;
    bool machineCode2IsSet() const;
    void unsetmachineCode2();
    void setMachineCode2(const std::string& value);

    /// <summary>
    /// 身份证背面第三行机器码。 
    /// </summary>

    std::string getMachineCode3() const;
    bool machineCode3IsSet() const;
    void unsetmachineCode3();
    void setMachineCode3(const std::string& value);

    /// <summary>
    /// 身份证头像照片的Base64编码。 若入参“return_portrait_image”字段缺失时，则此字段不存在。 
    /// </summary>

    std::string getPortraitImage() const;
    bool portraitImageIsSet() const;
    void unsetportraitImage();
    void setPortraitImage(const std::string& value);

    /// <summary>
    /// 相关字段的置信度信息，置信度越大，表示本次识别的对应字段的可靠性越高，在统计意义上，置信度越大，准确率越高。注：置信度由算法给出，不直接等价于对应字段的准确率。 
    /// </summary>

    Object getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(const Object& value);


protected:
    std::string side_;
    bool sideIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string nameEn_;
    bool nameEnIsSet_;
    std::string sex_;
    bool sexIsSet_;
    std::string issueDate_;
    bool issueDateIsSet_;
    std::string expiryDate_;
    bool expiryDateIsSet_;
    std::string birthDate_;
    bool birthDateIsSet_;
    std::string initialIssueDate_;
    bool initialIssueDateIsSet_;
    std::string height_;
    bool heightIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::string symbols_;
    bool symbolsIsSet_;
    std::string machineCode1_;
    bool machineCode1IsSet_;
    std::string machineCode2_;
    bool machineCode2IsSet_;
    std::string machineCode3_;
    bool machineCode3IsSet_;
    std::string portraitImage_;
    bool portraitImageIsSet_;
    Object confidence_;
    bool confidenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_MacaoIdCardResult_H_
