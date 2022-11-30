
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_DriverLicenseResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_DriverLicenseResult_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_OCR_V1_EXPORT  DriverLicenseResult
    : public ModelBase
{
public:
    DriverLicenseResult();
    virtual ~DriverLicenseResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DriverLicenseResult members

    /// <summary>
    /// 驾驶证类型。 normal：纸质驾驶证 electronic：电子驾驶证 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 驾驶证号。 
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 姓名。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 性别。 
    /// </summary>

    std::string getSex() const;
    bool sexIsSet() const;
    void unsetsex();
    void setSex(const std::string& value);

    /// <summary>
    /// 国籍。 
    /// </summary>

    std::string getNationality() const;
    bool nationalityIsSet() const;
    void unsetnationality();
    void setNationality(const std::string& value);

    /// <summary>
    /// 住址。 
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);

    /// <summary>
    /// 出生日期。 
    /// </summary>

    std::string getBirth() const;
    bool birthIsSet() const;
    void unsetbirth();
    void setBirth(const std::string& value);

    /// <summary>
    /// 初次领证日期。 
    /// </summary>

    std::string getIssueDate() const;
    bool issueDateIsSet() const;
    void unsetissueDate();
    void setIssueDate(const std::string& value);

    /// <summary>
    /// 准驾类型。 
    /// </summary>

    std::string getClass() const;
    bool classIsSet() const;
    void unsetclass();
    void setClass(const std::string& value);

    /// <summary>
    /// 有效起始日期。 
    /// </summary>

    std::string getValidFrom() const;
    bool validFromIsSet() const;
    void unsetvalidFrom();
    void setValidFrom(const std::string& value);

    /// <summary>
    /// 有效结束日期。 
    /// </summary>

    std::string getValidTo() const;
    bool validToIsSet() const;
    void unsetvalidTo();
    void setValidTo(const std::string& value);

    /// <summary>
    /// 发证机关。 
    /// </summary>

    std::string getIssuingAuthority() const;
    bool issuingAuthorityIsSet() const;
    void unsetissuingAuthority();
    void setIssuingAuthority(const std::string& value);

    /// <summary>
    /// 档案编号。 
    /// </summary>

    std::string getFileNumber() const;
    bool fileNumberIsSet() const;
    void unsetfileNumber();
    void setFileNumber(const std::string& value);

    /// <summary>
    /// 记录。 
    /// </summary>

    std::string getRecord() const;
    bool recordIsSet() const;
    void unsetrecord();
    void setRecord(const std::string& value);

    /// <summary>
    /// 累积记分。 
    /// </summary>

    std::string getAccumulatedScores() const;
    bool accumulatedScoresIsSet() const;
    void unsetaccumulatedScores();
    void setAccumulatedScores(const std::string& value);

    /// <summary>
    /// 状态。
    /// </summary>

    std::vector<std::string>& getStatus();
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::vector<std::string>& value);

    /// <summary>
    /// 生成时间。 
    /// </summary>

    std::string getGenerationDate() const;
    bool generationDateIsSet() const;
    void unsetgenerationDate();
    void setGenerationDate(const std::string& value);

    /// <summary>
    /// 当前时间。 
    /// </summary>

    std::string getCurrentTime() const;
    bool currentTimeIsSet() const;
    void unsetcurrentTime();
    void setCurrentTime(const std::string& value);

    /// <summary>
    /// 对应所有在原图上识别到的字段位置信息，包含所有文字区域四个顶点的二维坐标（x,y）。采用图像坐标系，坐标原点为图片左上角，x轴沿水平方向，y轴沿竖直方向。 
    /// </summary>

    Object getTextLocation() const;
    bool textLocationIsSet() const;
    void unsettextLocation();
    void setTextLocation(const Object& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string sex_;
    bool sexIsSet_;
    std::string nationality_;
    bool nationalityIsSet_;
    std::string address_;
    bool addressIsSet_;
    std::string birth_;
    bool birthIsSet_;
    std::string issueDate_;
    bool issueDateIsSet_;
    std::string class_;
    bool classIsSet_;
    std::string validFrom_;
    bool validFromIsSet_;
    std::string validTo_;
    bool validToIsSet_;
    std::string issuingAuthority_;
    bool issuingAuthorityIsSet_;
    std::string fileNumber_;
    bool fileNumberIsSet_;
    std::string record_;
    bool recordIsSet_;
    std::string accumulatedScores_;
    bool accumulatedScoresIsSet_;
    std::vector<std::string> status_;
    bool statusIsSet_;
    std::string generationDate_;
    bool generationDateIsSet_;
    std::string currentTime_;
    bool currentTimeIsSet_;
    Object textLocation_;
    bool textLocationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_DriverLicenseResult_H_
